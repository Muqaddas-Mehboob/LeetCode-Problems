#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        // If we use built in functions
        // Time complexity = O(1)
        // Space complexity = O(1)
        if(n==0) return 1;
        if(n != 0 && x != 0){
            double ans = pow(x,n);
            return ans;
        }else{
            return 0;
        }
    }
    double myPow(double x, int n) {
        // Approach : Binary Exponentiation
        // Time complexity O(logn)

        long binForm = n;
        if( n < 0){
            x = 1/x;
            binForm = -binForm;
        }
        double ans = 1;
        while( binForm > 0 ){
            if((binForm % 2) == 1){
                ans *= x;
            }
            x*=x;
            binForm /= 2;
        }
        return ans;
    }
};