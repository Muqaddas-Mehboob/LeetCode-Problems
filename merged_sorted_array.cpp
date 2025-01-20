class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      // Time complexity = O(m + n)
      // Space complexity = O(1)
      // Approach: Two Pointers
      
        int index = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while(i >= 0 && j >= 0){
            if(nums2[j] >= nums1[i]){
                nums1[index--] = nums2[j--];
            }
            else{
                nums1[index--] = nums1[i--];
            }
        }
        while(j >= 0){
            nums1[index--] = nums2[j--];
        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      // Time complexity = O((m+n)log(m+n))
      // Space complexity = O(1)
      // Approach: Using built-in sort function and utilizing extra space of nums1
      
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
