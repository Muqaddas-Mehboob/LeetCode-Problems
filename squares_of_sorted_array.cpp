#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // Time Complexity = O(nlogn)
        // Space Complexity = O(n)

        int n = nums.size();
        vector<int> temp(n, 1);

        for(int i = 0; i < n; i++){
            temp[i] = pow(nums[i], 2);
        }
        sort(temp.begin(),temp.end());

        return temp;
    }
    vector<int> sortedSquares(vector<int>& nums) {

        // Time Complexity = O(n)
        // Space Complexity = O(n)
        int n = nums.size();
        vector<int> temp(n, 1);

        for (int i = 0; i < n; i++) {
            nums[i] = pow(nums[i], 2);

        int left = 0;
        int right = n - 1;
        int i = n - 1;

        while (left <= right) {
            if (nums[left] > nums[right]) {
                temp[i--] = nums[left++];
            } else {
                temp[i--] = nums[right--];
            }
        }

        return temp;
    }
};