// Problem: Capacity To Ship Packages Within D Days, LeetCode: 1011
// Pattern: Binary Search
// Approach: Apply binary search on the search space(maxElement, arrSum),  
// create a check function to check the weight capacity in given days.
// Time Complexity: O(n * log(arrSum))
// Space Complexity: O(1)


class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int dayUsed = 1;
        int currWeight = 0;

        for(int weight : weights) {
            if(currWeight + weight <= capacity) {
                currWeight += weight;
            } else {
                dayUsed++;
                currWeight = weight;
            }
        }

    return dayUsed <= days;

    }
    
    int shipWithinDays(vector<int>& weights, int days) {

        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(canShip(weights, days, mid)) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    return start;

    }
};