class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int ans;
        int n = arr.size();
        map<int,int>mpp;
        for(int i = 0 ; i< n ; i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            if(it.second>1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};