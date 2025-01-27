class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
      // Approach : 01
      // Time complexity = O(n^2)
      // Space Complexity = O(1)
      
        for(int i = 0; i <nums.size(); i++){
            for(int j = i+1; j <nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;

      // Approach : 02  USING HASH SET
      //Time complexity = O(n)
      // Space Complaxity = O(n)

      unordered_set <int> s;
        for(auto num : nums){
            if(s.count(num)){
                return true;
            }
            s.insert(num);
        } 
        return false;

      // Approach : 03  USING HASH MAP (tHIS IS NOT MY SOLUTION. I GOT IT FROM LEETCODE)
      //Time complexity = O(n)
      // Space Complaxity = O(n)
      
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int num : nums) {
            if (seen[num] >= 1)
                return true;
            seen[num]++;
        }
        return false;

    }
};
