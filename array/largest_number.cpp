// Problem: Largest Number, LeetCode: 179
// Approach: Convert all numbers to string and sort them using custom comparator: a comes before b if (a + b) > (b + a), concatenate all strings to form the largest number 
// Time Complexity: O(n log n * k) ~ O(n log n): where k is cost of comparision
// Space Complexity: O( n * k) ~ O(n) where k is the max length of the string
class Solution {
public:
    static bool compare(string a, string b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> strNums;

        for(int num : nums) {
            strNums.push_back(to_string(num));
        }

        sort(strNums.begin(), strNums.end(), compare);

        if(strNums[0] == "0") {
            return "0";
        }

        string ans = "";
        for(string s : strNums) {
            ans += s;
        }

        return ans;
    }
   
};