class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        int totalSum = 0;
        int current = nums[0];

        // TIME COMPLEXITY = O(N)
        // SPACE COMPLEXITY = O(1)
        
        for(int i = 0 ; i < nums.size(); i++){
            totalSum += nums[i];
        }

        for (int i = 0; i < nums.size() ; i++){
            current = nums[i];
            rightSum = totalSum - leftSum - current;
            if(leftSum == rightSum) return i;

            leftSum += nums[i];
        }

        return -1;
        
    }
};
