// Given an array, sort it in ascending order.
// For each element, find the absolute difference between
// its original index and its index in the sorted array.
// Return the sum of these differences.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// =====================================================
// Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(n)
// =====================================================

/*
int main() {

    vector<int> arr = {4, 2, 1, 3};

    vector<int> sorted = arr;

    sort(sorted.begin(), sorted.end());

    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {

        for (int j = 0; j < sorted.size(); j++) {

            if (arr[i] == sorted[j]) {
                ans += abs(i - j);
            }

        }
    }

    cout << "ans is = " << ans;

    return 0;
}
*/


// =====================================================
// Optimized Method: Sorting with Original Indices
// Time Complexity: O(n log n)
// Space Complexity: O(n)
// =====================================================

int solve(vector<int>& arr) {

    vector<pair<int, int>> v;

    // Store {value, original index}
    for (int i = 0; i < arr.size(); i++) {
        v.push_back({arr[i], i});
    }

    // Sort by value
    sort(v.begin(), v.end());

    int ans = 0;

    // i = new index
    for (int i = 0; i < v.size(); i++) {
        ans += abs(v[i].second - i);
    }

    return ans;
}


int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << solve(arr);

    return 0;
}