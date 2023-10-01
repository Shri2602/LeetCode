class Solution {
public:
    int myAtoi(string s) {
    int i = 0;
    int sign = 1;
    long result = 0; // Use long to handle potential overflow

    // Step 1: Read and ignore leading whitespace
    while (i < s.length() && s[i] == ' ') {
        i++;
    }

    // Step 2: Check for a sign character
    if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Read in digits
    while (i < s.length() && isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');
        
        // Check for overflow
        if (result * sign > INT_MAX) {
            return INT_MAX;
        }
        if (result * sign < INT_MIN) {
            return INT_MIN;
        }
        
        i++;
    }

    return result * sign;
    }
};