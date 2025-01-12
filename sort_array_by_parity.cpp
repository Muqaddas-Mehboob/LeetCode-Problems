#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        // Time Complexity = O(n)
        // Space Complexity = O(n)

        int n = nums.size();
        vector<int> temp;

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 1){
                 temp.push_back(nums[i]);
            }
        }
        return temp;
    }

    vector<int> sortArrayByParity(vector<int>& nums) {

        // Time Complexity = O(n)
        // Space Complexity = O(1)

        int i = 0; // Snowball pointer for the even elements

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] % 2 == 0) { // Check if nums[j] is even
                swap(nums[i], nums[j]); // Swap even number to the 'even section'
                i++; // Move the snowball boundary forward
            }
        }

        return nums;
    }

};