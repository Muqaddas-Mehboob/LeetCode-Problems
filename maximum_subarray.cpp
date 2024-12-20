#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0;
        int maxSum = INT_MIN;
        for(int i : nums){
            current += nums[i];
            maxSum = max(current, maxSum);
            if(current < 0){
                current = 0;
            }
        }
        return maxSum;
    }
};