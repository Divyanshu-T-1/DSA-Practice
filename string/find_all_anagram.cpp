// Problem: Find all Anagram in a String
// Platform: LeetCode 15
// Pattern: Sliding window and hashmap
// Approach: save the frequency of p, and apply the slidingwindow on s of size = p then match the both frequency and push 
// the first index in to the ans
// Time Complexity: O(n * k) = O(n)
// Space Complexity: O(1)