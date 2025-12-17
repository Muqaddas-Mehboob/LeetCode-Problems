// USING BASIC MATHS 
// TIME COMPLEXITY = O(N^2)
// SPACE COMPLEXITY = O(1)

class Solution {
public:
    bool isHappy(int n) {

        while (n != 1 && n != 4) {

            int square = 0;

            while (n > 0) {
                int digit = n % 10;
                square += digit * digit;
                n /= 10;
            }
            n = square;
        }

        return n == 1;
    }
};

// USING HASH SETS

class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> seen;

        while(n != 1){
            if(seen.count(n)) return false;

            seen.insert(n);
             int square = 0;

            while (n > 0) {
                int digit = n % 10;
                square += digit * digit;
                n /= 10;
            }
            n = square;
        }

        return true;
    }
