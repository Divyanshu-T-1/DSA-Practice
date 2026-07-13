// Problem: Sub Array Sum Equals to K, LeetCode: 560
// Pattern: PrefixSum + Hashmap
// Approach: Maintain a running prefix sum and store its frequency in a hash map. Whenever prefixSum - k is found, add its frequency to the count 
// and then update the current prefix sum's frequency.
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

      unordered_map<int, int> countSum;
      int prefixSum = 0;
      int count = 0;
      countSum[0] = 1;

      for(int n : nums) {
        prefixSum += n;
        
        if(countSum.find(prefixSum - k) != countSum.end()) {
            count += countSum[prefixSum - k];
        }

        countSum[prefixSum]++;
       }
     return count;

    }
};