#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // This will be the Brute Force Approach but it will give you TLE
        // (Time Limit Exceed) because in constraints, it is clearly
        // mentioned that the code should be run in O(n) time.

        int n = nums.size();
        vector<int> answer(n , 1);
        int product = 1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j){
                    answer[i] *= nums[j];
                }
            }
           
        }
        return answer;
    }
    vector<int> productExceptSelf(vector<int>& nums) {

        // Optimal Approach
        // Time complexity = O(n)
        // Space Complexity = O(n)

        int n = nums.size();
        vector<int> answer(n,1);

        int prefix = 1;
        for(int i = 0; i < n; i++){
            answer[i] = prefix;
            prefix *= nums[i];
        }
        int suffix = 1;
        for(int i = n-1 ; i >= 0; i--){
            answer[i] *= suffix;
            suffix *= nums[i];
        }
        return answer;
        
    }
};

int main(){
    return 0;
}