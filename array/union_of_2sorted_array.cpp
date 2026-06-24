// Problem: Union of 2 Sorted Arrays, Geeks for Geeks
// Approach: Use Two Pointer approach to traverse 
// both arrays and create a empty vector to store the union
// Time Complexity: O(n + m)
// Space Complexity: o(n + m)


class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> nums;
        int i = 0; 
        int j = 0;
        while(i < a.size() && j < b.size()) {
            if(a[i] < b[j]) {
                if(nums.empty() || nums.back() != a[i])
                nums.push_back(a[i]);
                i++;
            } else if(a[i] > b[j]) {
                  if(nums.empty() || nums.back() != b[j])
                nums.push_back(b[j]);
                j++;
            } else {
                if(nums.empty() || nums.back() != a[i])
                nums.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        while(i < a.size()) {
            if(nums.empty() || nums.back() != a[i])
            nums.push_back(a[i]);
            i++;
        }
        while(j < b.size()) {
            if(nums.empty() || nums.back() != b[j])
            nums.push_back(b[j]);
            j++;
        }
        
        
        
        return nums;
    }
};