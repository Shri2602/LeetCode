class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }

    int minLen = INT_MAX;
    for (const string& str : strs) {
        minLen = min(minLen, static_cast<int>(str.length()));
    }

    string commonPrefix = "";
    for (int i = 0; i < minLen; ++i) {
        char currentChar = strs[0][i];
        for (const string& str : strs) {
            if (str[i] != currentChar) {
                return commonPrefix;
            }
        }
        commonPrefix += currentChar;
    }

    return commonPrefix;
        }
    
};