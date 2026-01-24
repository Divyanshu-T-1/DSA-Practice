// Problem: 3Sum
// Platform: LeetCode 15
// Pattern: Two Pointer 
// Approach: Sort the array, fix one element, and use two
// pointer to find pair that complete triplet while skip duplicate
// Time Complexity: O(n^2) because we fix one element and use two 
// pointer for scanning the reaming array
// Space Complexity: O(1)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            // skip duplicate first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // skip duplicate left
                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    // skip duplicate right
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};
