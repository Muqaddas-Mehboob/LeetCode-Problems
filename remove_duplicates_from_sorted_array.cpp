// Time Complexity = O(n)
// Space Complexity = O(1}

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int k = 0;

        if(nums.empty()) return 0;

        for(int i = 1; i < length; i++){
            if(nums[i] != nums[k]){
                k++;
                nums[k] = nums[i];
            }
        }

        return k+1;
    }
};
