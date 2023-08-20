class Solution {
public:
    int majorityElement(vector<int>& v) {
        unordered_map<int,int>mpp;
        for(int i=0;i<v.size();i++){
            mpp[v[i]]++;
        }
        int maxi = 0;
        int maxEle = INT_MIN;
        for(auto it : mpp){
            maxi = max(maxi,it.second);
            if(maxi == it.second){
                maxEle = it.first; 
            }
        }
        return maxEle;
    }
};