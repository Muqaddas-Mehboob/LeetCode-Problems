#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // My Approach 
        // Time Complexity = O(n)
        // Space Complexity = O(1) 
        int MIN = INT_MAX;
        int MAX = 0;
        if(prices.size() == 0){
            return 0;
        }
        for(int price : prices){
            MIN = min(MIN, price);
            MAX = max(MAX, price - MIN);
        }
        return MAX;
    }
};