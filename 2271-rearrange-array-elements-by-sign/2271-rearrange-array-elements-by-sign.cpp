class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        vector<int> arr(a.size(),0);
        int pos = 0 ;
        int neg = 1;
        for(int i = 0 ; i< a.size(); i++){
            if(a[i]>0){
                arr[pos] = a[i];
                pos+=2;
            }
            else{
                arr[neg] = a[i];
                neg+=2;
            }
        }
        return arr;
    }
};