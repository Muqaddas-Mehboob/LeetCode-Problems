class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vec;
        int length = nums.size();

        if (nums.empty())
            return vec;

        int start = nums[0];

        for (int i = 0; i < length - 1; i++) {
            if (nums[i + 1] != nums[i] + 1) {
                if (start == nums[i]) {
                    vec.push_back(to_string(start));
                } else {
                    vec.push_back(to_string(start) + "->" + to_string(nums[i]));
                }
                start = nums[i + 1];
            }
        }
        if (start == nums[length - 1]) {
            vec.push_back(to_string(start));
        } else {
            vec.push_back(to_string(start) + "->" +
                          to_string(nums[length - 1]));
        }
        return vec;
    }
};
