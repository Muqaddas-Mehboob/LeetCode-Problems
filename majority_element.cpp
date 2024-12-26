#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    { // My approach (Brute Force approach always)
        int count;
        int n = nums.size();
        int i, j;
        for (i : nums)
        {
            count = 0;
            for (j : nums)
            {
                if (i == j)
                {
                    count++;
                }
            }
            if (count > (n / 2))
            {
                return i;
            }
        }
        return -1;
    }
    int majorityElement1(vector<int> &nums)
    { // Another approach found from leetcode (Complexity: O(nlogn)
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n / 2];

        // According to this solution, the occurence of majority element will be at the middle of the
        // array which can be proved by doing dry run
    }
    int majorityElement(vector<int> &nums)
    { // Better approach (Moore's Voting algorithm)
    int ans = 0;
        int count = 0;
        for(int val:nums){
            if(count==0){
                ans = val;
            }
            if(ans == val){
                count++;
            }else{
                count--;
            }
        } 
        return ans; 
    }
};