class Solution {
public:

    // TIME COMPLEXITY = O(N)
    // SPACE COMPLEXITY = O(1)
    
    bool isPalindromeRange(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start < end){
            if(s[start] == s[end]){
                start++;
                end--;
            }else{
                return isPalindromeRange(s, start, end - 1) || isPalindromeRange(s, start + 1, end);
            }
        }

        return true;
    
    }
};
