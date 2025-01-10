#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        // Time complexity = O(n^2)
        // Space Complexity = O(m*n)

        vector<vector<int>> ans(m, vector<int>(n));
        if((m*n)==original.size()){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n;j++){
                    ans[i][j] = original[i * n + j];
                }
            }
        }
        else{
            return {};
        }
        return ans;
    } 
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>> ans(m, vector<int>(n));

        // Time complexity = O(n)
        // Space Complexity = O(m*n)

        if(m*n == original.size()){
            for(int i = 0; i < m*n; i++){
                ans[i/n][i%n] = original[i];
            }
            return ans;
        }
        return {};
    }
};