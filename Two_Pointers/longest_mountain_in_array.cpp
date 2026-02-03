// Problem: Longest Mountain in Array
// Platform: LeetCode 845
// Pattern: Two Pointer (Mountain Array)
// Approach: First find the peak element then gradually expand left and right.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for(int i = 1; i < n - 1; i++) {
            // fiding peak
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {

                int left = i;
                int right = i;

                // left expansion
                while(left > 0 && arr[left] > arr[left - 1]) {
                    left--;
                }

                // right expansion
                while (right < n - 1 && arr[right] > arr[right + 1]) {
                    right++;
                }

                ans = max(ans, right - left + 1);


            }


        }

        return ans;
    }
};
