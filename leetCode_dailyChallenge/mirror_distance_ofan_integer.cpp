// Problem: LeetCode 3783: Mirror Distance of an Integer
// Approach: Reverse the number and compute absolute difference
// Time Complexity: O(d) ~ O(log10(n)), where d = number of digits
// Space Complexity: O(1)

class Solution {
public:
    int getReverse(int n) {
        int rev = 0;
        while(n != 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }

    int mirrorDistance(int n) {
        return abs(n - getReverse(n));
    }
};
