class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // THIS SOLUTION IS NOT IN-PLACE SO
        // TIME COMPLEXITY = O(N)
        // SPACE COMPLEXITY = O(N)

        vector<int> zereos;
        vector<int> nonZeroes;

        for( int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zereos.push_back(nums[i]);
            }
            else{
                nonZeroes.push_back(nums[i]);
            }
        }
        nums = nonZeroes;
        nums.insert(nums.end(), zereos.begin(), zereos.end());

        // TWO POINTERS APPROACH
        // TIME COMPLEXITY = O(N)
        // SPACE COMPLEXITY = O(1)

        int fast = 0;
        int slow = 0;

        for(fast = 0; fast < nums.size(); fast++){
            if(nums[fast] != 0){
                swap(nums[slow], nums[fast]);
                slow++;
            }
        }
    }
};
