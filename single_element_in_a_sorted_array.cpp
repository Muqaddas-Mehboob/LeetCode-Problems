#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        // Time Complexity = O(logn)
        // Space Complexity = O(1)
        
        int mid;
        int start = 0;
        int n = nums.size();
        int end = n-1;

        if(n == 1){
            return nums[0];
        }

        while(start <= end){
            mid = start + (end - start)/2;
            
            if(mid == n-1 && nums[n-1] != nums[n-2]){
                return nums[mid];
            }
            if(mid == 0 && nums[0] != nums[1]){
                return nums[mid];
            }
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            
            if(mid % 2 == 0){ // ODD
                if(nums[mid - 1] == nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
            else{  // EVEN
                if(nums[mid + 1] == nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
};