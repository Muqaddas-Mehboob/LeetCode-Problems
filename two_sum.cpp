#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int ele = nums[i];
            int difference = target - ele;
            if(ans.find(difference) != ans.end()){
                return {ans[difference], i};
            }
            ans[ele] = i;
        }
        return {-1, -1};
    }
};

int main(){
    return 0;
}