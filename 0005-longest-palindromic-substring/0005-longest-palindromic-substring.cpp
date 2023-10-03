class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) {
            return s;
        }

        int start = 0;  // Start index of the longest palindromic substring.
        int maxLength = 1;  // Length of the longest palindromic substring.

        // Create a 2D boolean table to store the palindrome information.
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));

        // All substrings of length 1 are palindromes.
        for (int i = 0; i < n; ++i) {
            isPalindrome[i][i] = true;
        }

        // Check for palindromes of length 2.
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                isPalindrome[i][i + 1] = true;
                start = i;
                maxLength = 2;
            }
        }

        // Check for palindromes of length 3 or more.
        for (int len = 3; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;  // Ending index of current substring.

                // Check if the current substring is a palindrome.
                if (s[i] == s[j] && isPalindrome[i + 1][j - 1]) {
                    isPalindrome[i][j] = true;

                    // Update the start and maxLength if a longer palindrome is found.
                    if (len > maxLength) {
                        start = i;
                        maxLength = len;
                    }
                }
            }
        }

        // Extract and return the longest palindromic substring.
        return s.substr(start, maxLength);
    }
};
