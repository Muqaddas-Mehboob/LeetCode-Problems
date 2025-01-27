class Solution {
public:
    bool isAnagram(string s, string t) {

      // Approach : 01 (BY SORTING BOTH THE STRINGS IN ALPHABETHICAL ORDER AND COMPARING THEM)
      // Time complexity = O(nlogn)
      // Space complexity = O(1)
      
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;

      // Approach : 01 (BY USING HASH TABLE)
      // Time complexity = O(n)
      // Space complexity = O(n)
      
      unordered_map <char, int> seen1;
      unordered_map <char, int> seen2;

        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            seen1[s[i]]++; 
            seen2[t[i]]++;
        }
        for(auto ch : seen1){
            char entry = ch.first;
            if(seen2[entry] != ch.second ) return false;
        }
        return true;
    }
};
