class Solution {
public:
    void sortColors(vector<int>& nums) {

      // Time Complexity = O(n^2)
      // Space Complexity = O(1)
      // Approach: Bubble Sort (This can be solved using other sorting algorithms.)
        
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = 0; j < nums.size() - i - 1; j++){
                if(nums[j] > nums[j + 1]){
                    swap(nums[j], nums[j+1]);
                }
            }
        }
    }
    void sortColors(vector<int>& nums) {

        // Time Complexity = O(nlogn)
        // Space Complexity = O(1)
        
        sort(nums.begin(), nums.end());
    }
};
