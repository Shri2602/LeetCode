class Solution {
public:
    void bubbleSort(vector<int>&arr, int n) 
{
    //write your code here
    // int n = arr.size();
    for(int i = n-1 ; i>= 0 ; i--){
        for(int j = 0 ; j <= i-1 ; j++ ){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
    void sortColors(vector<int>& nums) {
       bubbleSort(nums,nums.size()); 
    }
};