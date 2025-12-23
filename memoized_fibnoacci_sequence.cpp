class Solution {
public:
    int fib(int n) {

        // TIME COMPLEXITY = O(2*N)
        // SPACE COMPLEXITY = O(1)

        if (n <= 1) return n;

        return fib(n - 1) + fib(n - 2);

        // APPROACH: MEMOIZATION
        // TIME COMPLEXITY = O(N)
        // SPACE COMPLEXITY = O(N)
        
        int terms[1000];    
        if (n <= 1) return n;

        if(terms[n] != 0) return terms[n];

        else{
            terms[n] = fib(n-1) + fib(n-2);

            return terms[n];
        }


    }
};
