// Time complexity = O(n)
// Space complexity = O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.empty()) return 0;

        if(nums.size() == 1 && nums[0] == 1) return 1;

        int count = 0;
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 1){
                    count++;
                    maxi = max(maxi, count);
                }else if(nums[i] == 0){
                    count = 0;
                }
        }
        return maxi;
    }
};
