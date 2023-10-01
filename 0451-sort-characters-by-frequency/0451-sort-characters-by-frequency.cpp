class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        for(char ch : s){
            mpp[ch]++;
        }
        string ans;
        vector<pair<int,char>> arr;
        for (auto it : mpp) {
            arr.push_back({it.second,it.first});
        }
        sort(arr.rbegin(),arr.rend());
        for(auto it : arr){
            int i = it.first;
            while(i>0){
                ans.push_back(it.second);
                i--;
            }
        }
        return ans;	

    }
};