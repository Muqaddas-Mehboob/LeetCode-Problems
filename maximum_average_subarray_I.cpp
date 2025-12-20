class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        // TIME COMPLEXITY = O(N)
        // SPACE COMPLEXITY = O(1)
        // APPROACH = FIXED SIZED SLIDING WINDOW
        double sum = 0;
        double result = 0;

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        result = sum;

        for(int i = k; i < nums.size(); i++){
            sum = sum + nums[i] - nums[i-k];
            result = max(result, sum);
        }

        return result/k;
    }
};
