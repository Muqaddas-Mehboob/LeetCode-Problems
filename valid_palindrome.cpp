class Solution {
public:
    bool isPalindrome(string s) {

      // Approach : 01 (USING TWO POINTERS)
      // Time Complexity = O(n)
      // Space Complexity = O(n)
      
        if(s.length() == 1) return true;

        string result = "";
        for(char ch : s){
            if(isalnum(ch)){
                result += ch;
            }
        }
        for(char &ch : result){
            ch = tolower(ch);
        }
        int start = 0;
        int end = result.length() - 1;

        while(start < end){
            if(result[start] != result[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
