class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // Time Complexity = O(n)
        // Space Complexity = O(1)
        // Approach 01: By usin built-in-functions

        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();

        // Approach 02:
        // Time Complexity = O(n)
        // Space Complexity = O(1)

        int n = nums.size();
        int index = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[index++] = nums[i];
            }
        }
        return index;

    }
};
