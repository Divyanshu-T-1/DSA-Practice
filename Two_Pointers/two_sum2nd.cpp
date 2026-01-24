// Problem: Two Sum Second
// Platform: LeetCode 167
// Pattern: Two pointer
// Approach: Since array is already sorted so we can apply two pointer 
// approach to find the required pair can check the condition left < right
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while(left < right) {
            // when sum will be greater than target
            if(numbers[left] + numbers[right] > target) {
                right--;
            }
             // when sum will be less than target
            else if(numbers[left] + numbers[right] < target) {
                left++;

            }
            // valid case 
            else {
                // we are returning indices by + 1 because we started from 0 index
              return {left + 1, right + 1};
            }
        }

        return {};
        
    }
};