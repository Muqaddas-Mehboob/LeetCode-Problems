#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        // Time complexity = O(n)
        // Space Complexity = O(1)
        
        int rows = mat.size();
        int cols = mat[0].size();
        int pd = 0;
        int sd = 0;
        int mid = mat[rows/2][cols/2];

        for(int i = 0; i < cols; i++){
            pd += mat[i][i];
            sd += mat[i][cols - i - 1];
        }
        int sum = pd + sd;
        if(rows%2 == 1){
            sum -= mid;
            return sum;
        }
       return sum;

    }
};
