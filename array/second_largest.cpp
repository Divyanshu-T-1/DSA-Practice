// Problem: Second Largest Element, (GfG)
// Approach: Traverse the array once while maintining the largest and secondLargest distinct elements. 
// If current element is grater thatn largest, update both largest and secondLargest.
// Otherwise, if it lies between largest and secondLargest, update secondLargest.

// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        
        for(int num : arr) {
            if(num > largest ) {
                secondLargest = largest;
                largest = num;
                
            }
             else if (num < largest && num > secondLargest) {
                 secondLargest = num;
             }
        }
        
        return secondLargest == INT_MIN ? -1 : secondLargest;
        
    }
};