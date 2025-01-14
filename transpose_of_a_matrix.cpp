#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        // Time Complexity = O(n^2)
        // Space Complexity = O(rows * cols)
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> temp(cols, vector<int>(rows));

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                temp[j][i] = matrix[i][j];
            }
        }
        return temp;
    }
};