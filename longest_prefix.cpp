// 🧠 Main ways to solve it (high level)
// There are 5 common approaches people use.

// 1️⃣ Horizontal scanning
// Start with the first word as prefix

// Compare it with the second word

// Shorten the prefix if needed

// Move to the next word

// Repeat until all words are checked

// 📌 Easy to understand
// 📌 Very popular in interviews

// 2️⃣ Vertical scanning
// Compare characters column by column

// First compare all strings at index 0

// Then index 1, then 2, and so on

// Stop when a mismatch appears

// 📌 Good when strings are short
// 📌 Simple logic

// 3️⃣ Sorting method
// Sort all strings

// Compare only the first and last string

// The common prefix of these two is the answer

// 📌 Smart trick
// 📌 Extra cost because of sorting

// 4️⃣ Divide and conquer
// Split the array into two halves

// Find prefix for left half

// Find prefix for right half

// Merge the results

// 📌 Similar to merge sort idea
// 📌 Slightly advanced

// 5️⃣ Trie (Prefix Tree)
// Insert all strings into a trie

// Traverse until branching happens

// Characters before branching form the prefix

// 📌 Very powerful
// 📌 Used when there are many prefix queries

// 🧮 Which one is best?
// Beginner / exams → Horizontal or Vertical scanning

// Competitive programming → Sorting or Divide & Conquer

// Real-world / large data → Trie

// I USED SORTING METHOD WITH O(Nlogn+M) TIME COMPLEXITY AND SPACE COMPLEXITY O(N)

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
    sort(s.begin(), s.end());

    vector<string> s1;
    s1.push_back(s.front());  // first element
    s1.push_back(s.back());
    string prefix = "";
    int n = s1.size();
    string first = s1[0];
    string last = s1[n-1];
    
    int minlength = min(first.length(), last.length());
    
    
    for(int i = 0; i < minlength; i++){
        if(first[i] == last[i]){
            prefix += first[i];
        } else{
            break;
        }
    }
    return prefix;
    }
};
