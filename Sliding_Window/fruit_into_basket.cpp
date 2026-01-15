// Problem: Fruit Into Baskets
// Platform: LeetCode 904
// Pattern: Variable Size Sliding Window
// Idea: Maintain a window with distinct fruits 
// and shrik when more than 2 type fruits appear
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // tools
        unordered_map<int, int> map;
        int left = 0;
        int maxLen = 0;
        // 1. main loop
        for(int right = 0; right < fruits.size(); right++) {
            // 2. window expansion
            map[fruits[right]]++;

            while(map.size() > 2) {
                // 3. shrink window 
                map[fruits[left]]--;
                if(map[fruits[left]] == 0) {
                    map.erase(fruits[left]);
                }
                left++;
                
            }
            // 4.ans update
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
        
    }
};