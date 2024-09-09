#include <iostream>
using namespace std;

/*
# Reverse Integer

This is the solution to the **Reverse Integer** problem implemented in C++. The program takes a 32-bit signed integer, reverses its digits, and handles overflow cases by returning `0` if the result goes beyond the allowable integer range.

## Problem Statement

Given a 32-bit signed integer `n`, reverse its digits. If the reversed integer exceeds the range of 32-bit signed integers `[-2³¹, 2³¹ - 1]`, return `0`.

### Examples:

- **Input:** `n = 123`  
  **Output:** `321`

- **Input:** `n = -456`  
  **Output:** `-654`

- **Input:** `n = 120`  
  **Output:** `21`

- **Input:** `n = 1534236469`  
  **Output:** `0` (due to overflow)

## Solution Approach

1. Extract the number's last digit using the modulus operation (`n % 10`).
2. Append this digit to the result by multiplying the current result by 10 and adding the digit.
3. Ensure the result does not overflow the 32-bit signed integer range.
4. Return the reversed number, or `0` if overflow occurs.

## Complexity

Time Complexity: O(log(n)) – The program processes each digit of the input number.
Space Complexity: O(1) – Uses constant space for variables.

*/

class Solution{
    public:
    int reverse(int n){
        int digit, answer = 0;
        while(n != 0){
            digit = n%10;
            if(answer > INT_MAX/10 || answer < INT_MIN/10){
                return 0;
            }
            answer = (answer * 10) + digit;
            n /= 10;
        }
        return answer;
    }
};

int main(){
    int n; 
    cin >> n;
    Solution number;
    int result = number.reverse(n);
    cout<< "Reversed number: "<<result;
    return 0;
}
