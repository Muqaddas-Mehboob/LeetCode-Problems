#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        // Time complexity = O(nlogn)
        // Space Complexity = O(1)

        int n = nums.size(); 
        sort(nums.begin(), nums.end());
        int result = (nums[n-1]-1)*(nums[n-2]-1);
        return result;
    }
    int maxProduct(vector<int>& nums) {
        
        // Time complexity = O(n^2)
        // Space Complexity = O(1)

        int n = nums.size();
        int result = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                result = max(result,(nums[i]-1)*(nums[j]-1));
            }
        }
        return result;

    }
    int maxProduct(vector<int>& nums) {
        
        // Time complexity = O(n)
        // Space Complexity = O(1)

        int max1 = 0;
        int max2 = 0;

        for(int num : nums){
            if(num > max1){
                max2 = max1;
                max1 = num;
            }else if(num > max2){
                max2 = num;
            }
        }
        return (max1-1)*(max2-1);
    }
};
