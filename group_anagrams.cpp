class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // TIME COMPLEXITY = O(N∗Klogk)
        // SPACE COMPLEXITY = O(N*K)
        
        // SORTING
        vector<vector<string>> result;
        unordered_map<string, vector<string>> sortedKeys;

        for(string word : strs){
            string key = word;
            sort(key.begin(), key.end());
            sortedKeys[key].push_back(word);
        }

        for(auto word : sortedKeys){
            result.push_back(word.second);
        }

        return result;

        // CHARACTER FREQUENCY (WILL TRY)
    }
};
