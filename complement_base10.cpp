#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

/*
# Bitwise Complement

Below  is the solution to the **Bitwise Complement** problem implemented in C++. The program takes a non-negative integer `n` and returns its complement, flipping all bits of the binary representation of `n`. For a given number `n`, the complement is calculated within the range of the number's bit length.

## Problem Statement

Given a non-negative integer `n`, return its bitwise complement. The complement of an integer is the result of flipping each bit in its binary representation. For example, the complement of `101` (binary for `5`) is `010`, which is `2`.

### Examples:

- **Input:** `n = 5`  
  **Output:** `2`

- **Input:** `n = 7`  
  **Output:** `0`

- **Input:** `n = 10`  
  **Output:** `5`

- **Input:** `n = 0`  
  **Output:** `1`

## Solution Approach

1. If `n` is `0`, return `1` as a special case since the complement of `0` is `1`.
2. Create a mask that has all bits set to `1` for the length of the binary representation of `n`. This ensures we only flip the bits that correspond to the length of `n`'s binary form.
3. Compute the bitwise complement of `n` by flipping all the bits and then applying the mask to keep only the relevant bits.
4. Return the final complemented value.

## Complexity

- **Time Complexity:** `O(log(n))` – The program processes each bit of the input number.
- **Space Complexity:** `O(1)` – Uses a constant amount of space for variables.

*/

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask =0;
        if(n == 0){
            return 1;
        }
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};
int main(){
    Solution s;
    cout << s.bitwiseComplement(0);
    return 0;
}
