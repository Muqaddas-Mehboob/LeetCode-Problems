class Solution {
public:
    void sortColors(vector<int>& nums) {

      // Time Complexity = O(n^2)
      // Space Complexity = O(1)
      // Apprach: Bubble Sort (This can also be solved using any other sorting algortihms.)
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = 0; j < nums.size() - i - 1; j++){
                if(nums[j] > nums[j + 1]){
                    swap(nums[j], nums[j+1]);
                }
            }
        }
    }
};
