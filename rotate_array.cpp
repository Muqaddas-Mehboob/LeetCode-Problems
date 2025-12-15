class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count = 1;
        int n = nums.size();


        // TIME COMPLEXITY = O(N*k)
        // SPCE COMPLEXITY = O(1)

        while(count <= k){

            // Good for short size array but 
            // throw TLE for larger size arrays
            
            int last = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), last);
            count++;
        }

        // TIME COMPLEXITY = O(N)
        // SPCE COMPLEXITY = O(1)

        // Built in function
        k = k % n;
        std::rotate(nums.begin(), nums.end() - k, nums.end());


        // TIME COMPLEXITY = O(N)
        // SPCE COMPLEXITY = O(1)

        // Others solution
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
