class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Write your code here.
        int m = matrix[0].size();
        int n = matrix.size();
        multimap<int, int>pr;
        for(int i = 0;i<n;i++){
            for(int j = 0 ; j< m ; j++){
                    if (matrix[i][j] == 0) {
                        pr.insert({i,j});
                            }
            }
        }
        for(auto it : pr){
            for(int i = 0 ; i < m ; i++){
                matrix[it.first][i] = 0;
            }
        }
        for(auto it : pr){
            for(int i = 0 ; i < n ; i++){
                matrix[i][it.second] = 0;
            }
        }
        // return matrix;
    }
};