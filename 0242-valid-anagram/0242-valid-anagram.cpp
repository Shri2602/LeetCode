class Solution {
public:
    bool isAnagram(string str1, string str2) {
        if(str1.size()!=str2.size()) return false;
        unordered_map<char,int>mpp;
        for(int i =0;i< str1.size() ; i++){
            mpp[str1[i]]++;
        }
        for(int i =0;i< str1.size() ; i++){
            mpp[str2[i]]--;
        }
        for(int i =0;i< str1.size() ; i++){
            if(mpp[str1[i]]!=0){
                return false;
            }
        }
        return true;
        }
};