// Problem: Two Furtherest Houses with Different Colors, LeetCode: 2078
// Approach: Pair comparison
// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;

        int i = 0;
        while(i < n) {
            int j = i + 1;  

            while(j < n) {  
                if(colors[i] != colors[j]) {
                    ans = max(ans, j - i);
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};