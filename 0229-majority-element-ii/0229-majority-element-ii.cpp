class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
    map <int,int> hash;
	vector<int> ans;
	int n = v.size();
	for(int i = 0 ; i < n ; i++){
		hash[v[i]]++;
	}
	for(auto it : hash){
		if(it.second> n/3){
			ans.push_back(it.first);
		}
	}
	return ans;
    }
};