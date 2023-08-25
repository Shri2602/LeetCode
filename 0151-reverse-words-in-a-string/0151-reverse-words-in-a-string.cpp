class Solution {
public:
    string reverseWords(string s) {
        std::stack<std::string> st;
        int i = 0;
        std::string str = "";
        while (i < s.length()) {
            if (s[i] != ' ') {
                str = "";
                while (i < s.length() && s[i] != ' ') {
                    str += s[i];
                    i++;
                }
                st.push(str);
            }
            else {
                while (i < s.length() && s[i] == ' ') {
                    i++;
                }
            }
        }
        std::string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) {
                ans += " ";
            }
        }
        return ans;
    }

};