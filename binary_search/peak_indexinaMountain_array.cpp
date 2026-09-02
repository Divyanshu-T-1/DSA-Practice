// Problem: LeetCode 852, Peak Index in a Mountain Array
// Pattern: Binary Search
// Time Complexity: O(lon n)
// Auxilarry Space: O(1)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        
        while(start < end) {
            int mid = start + ( end - start) / 2;
            if( arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;

            }
        }

        return start;
        
    }
};