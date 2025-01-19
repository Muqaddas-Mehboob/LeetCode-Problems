class Solution {
public:
    void sortColors(vector<int>& nums) {

      // Time Complexity = O(n^2)
      // Space Complexity = O(1)
      // Approach: Bubble Sort (This can be solved using other sorting algorithms.)
        
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = 0; j < nums.size() - i - 1; j++){
                if(nums[j] > nums[j + 1]){
                    swap(nums[j], nums[j+1]);
                }
            }
        }
    }
    void sortColors(vector<int>& nums) {

        // Time Complexity = O(nlogn)
        // Space Complexity = O(1)
        
        sort(nums.begin(), nums.end());
    }

    void sortColors(vector<int>& nums) {

        // Time Complexity = O(n)
        // Space Complexity = O(1)
        // Approach: Counting 0's, 1's and 2's
        
        int n = nums.size();
        int countOfZero = 0;
        int countOfOnes = 0;
        int countOfTwos = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                countOfZero++;
            }
            else if(nums[i] == 1){
                countOfOnes++;
            }
            else{
                countOfTwos++;
            }
        }

        int index = 0;
        for(int i = 0; i < countOfZero; i++){
            nums[index++] = 0;
        }
        for(int i = 0; i < countOfOnes; i++){
            nums[index++] = 1;
        }
        for(int i = 0; i < countOfTwos; i++){
            nums[index++] = 2;
        }
    }

    void sortColors(vector<int>& nums) {

        // Time Complexity = O(n)
        // Space Complexity = O(1)
        // Approach: Dutch National Flag Algorithm (A one-pass algorithm with constant space complexity)
        
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid++], nums[low++]);
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[high--], nums[mid]);
            }
        }
    }
};
