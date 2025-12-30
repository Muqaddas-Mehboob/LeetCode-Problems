class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // TIME COMPLEXITY = O(N LOG k)
        // SPACE COMPLEXITY = O(N + k)
        
        // COUNTING FREQUENCY OF EACH ELEMENT
        unordered_map<int, int> counts;
        for(int num : nums){
            counts[num]++;
        }

        // USING MIN-HEAP TO SORT AND COMPARE
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(auto &pair : counts){
            int num = pair.first;
            int freq = pair.second;

            if(pq.size() < k){
                pq.push({freq, num});
            }
            else if(pq.size() == k){
                if(freq > pq.top().first){
                    pq.pop();
                    pq.push({freq, num});
                }
            }
        }

        // REMOVING THE TOP KTH ELEMENTS FROM THE HEAP
        vector <int> result;

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
