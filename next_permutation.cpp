class Solution {
public:
    void nextPermutation(vector<int>& nums) {

      // Approach : 01 (BY USING BUILT IN FUNCTIONS)
      // Time complexity = O(n)
      // Space complexity = O(1)
      
        next_permutation(nums.begin(), nums.end());
        
    }
    void nextPermutation(vector<int>& nums) {

      // Approach : 02 
      // Time complexity = O(n)
      // Space complexity = O(1)

        // Finding the pivot element

        int pivot = -1;
        int n = nums.size();

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // Swapping the number with the rightmost element of the array
        // i.e. the next largest element

        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Reverse (pivot + 1 , n - 1)

        reverse(nums.begin() + pivot + 1, nums.end());
    }

};
