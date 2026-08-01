// Valid Soldier Arrangement  with allowed values: you are given:
// N -> total numbers of soldiers, values[] -> array of allowed numbers,
// end -> required number of the last soldier
// Arrange the soldier in astraight line such that:
// 1: Each soldier's number is chosen from values[]
// 2: No two adjacent soldiers have the same number
// 3: ther first soldier must have number = 1 ans the last num must = end
// Example
// Input: N = 4, values = [1, 2, 3, 4], end = 3, output: 7

// Using  Recursion 
// Time Complexity: O(n^n) space complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

int countWays = 0;

void solve(int pos, int N, int pre, vector<int> &values, int end) {

  // base case
  if (pos == N - 1) {
    if(end != pre) {
      countWays++;
    } return;
  }

  for (int num : values) {

    if(num != pre) {
      solve(pos + 1, N, num, values, end);
    }
  }
}

int main () {

  int N = 3;
  vector<int> values = {1, 2, 3};
  int end = 3;

  solve(1, N, 1, values, end);

  cout << countWays << endl;

  return 0;

}

