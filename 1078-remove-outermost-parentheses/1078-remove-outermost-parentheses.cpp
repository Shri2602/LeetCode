class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        string news;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                if(cnt > 0){
                    news += s[i];
                }
                cnt++;
            }
            else{
                cnt--;
                if(cnt>0){
                    news += s[i];
                }
            }
        }
        return news;
    }
};