class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // TIME COMPLEXITY = O(NLOGN)
        // SPACE COMPLEXITY = O(1)

        sort(nums.begin(), nums.end(), greater<int>());

        return nums[k-1];

        // TIME COMPLEXITY = O(NLOGN)
        // SPACE COMPLEXITY = O(N)
        // WITHOUT SORTING

        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto& num : nums){
            if(pq.size() < k){
                pq.push(num);
            }
            else if(pq.size() == k){
                if(num > pq.top()){
                    pq.pop();
                    pq.push(num);
                }
                else{
                    continue;
                }
            }
        }

        return pq.top();
    }
};
