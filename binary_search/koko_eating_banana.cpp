// Problem: Koko Eating Bananas, LeetCode 875
// Pattern: Binary Search on Answer
// Approach: Use binary search on eating speed k from 1 to max pile.
// For every mid speed, calculate total hours needed and check if it is possible within h hours.
// Time Complexity: O(n * log(maxElement))
// Space Complexity: O(1)

class Solution {
public:

    bool canEat(vector<int>& piles, int h, int k) {

        long long hours = 0;

        for(int pile : piles) {

            hours += (pile + k - 1) / k;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;

        int end = *max_element(piles.begin(), piles.end());

        while(start < end) {

            int mid = start + (end - start) / 2;

            if(canEat(piles, h, mid)) {
                end = mid;
            }
            else {
                start = mid + 1;
            }
        }

        return start;
    }
};