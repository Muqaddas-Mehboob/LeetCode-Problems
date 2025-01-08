#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        // This will be the Brute Force Approach but it will give you TLE
        // (Time Limit Exceed) because in constraints, it is clearly
        // mentioned that the code should be perform 10^5 operations and O(n^2)
        // algorithm will perform O(n^5)^2, which is inefficient for this 
        // problem, so we must have to write algorithm whose complexity must be 
        // O(nlogn) or having linear time complexity

        int n = height.size();
        int ans = 0;
        for(int i = 0; i < n ; i++){
            for(int j = i+1; j < n; j++){
                int width = j - i ;
                int heigh = min(height[i], height[j]);
                int area = width * heigh;
                ans = max(ans, area);
            }
        }
        return ans;
    }
    int maxArea(vector<int>& height) {
        
        // Optimal Approach
        // Time complexity = O(n)
        // Space Complexity = O(1)

        int n = height.size();
        int left = 0;
        int right = n - 1;
        int ans = 0;
        while(left < right){
            int width = right - left;
            int hi = min(height[left], height[right]);
            int area = width * hi;
            ans = max(ans, area);
            height[left] < height[right] ? left++ : right--;
        }
        return ans;
    }
};
int main(){
    return 0;
}