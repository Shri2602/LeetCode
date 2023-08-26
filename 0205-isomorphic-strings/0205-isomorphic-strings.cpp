class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
       if (str1.size() != str2.size()) {
            return false;
        }
        std::unordered_map<char, char> s1_to_s2;
        std::unordered_map<char, char> s2_to_s1;
        for (int i = 0; i < str1.size(); i++) {
            char s1 = str1[i];
            char s2 = str2[i];
            if (s1_to_s2.find(s1) == s1_to_s2.end()) {
                s1_to_s2[s1] = s2;
            } else if (s1_to_s2[s1] != s2) {
                return false;
            }
            if (s2_to_s1.find(s2) == s2_to_s1.end()) {
                s2_to_s1[s2] = s1;
            } else if (s2_to_s1[s2] != s1) {
                return false;
            }
        }
        return true;
    }
};