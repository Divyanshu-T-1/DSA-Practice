// Problem: You are given two binary numbers as strings. Your task is to compute their sum and print the resulting binary number.
//  The input binary numbers do not contain learding zeros unless the nouber itself is 0;
// Input: 1010, 1011 output: 10101

// Time complextiy: O(n)
// Space complexity: O(n)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
  int i = a.size() - 1;
  int j = b.size() - 1;

  int carry = 0;
  string result;

  while (i >= 0 || j >= 0 || carry) {

    int sum = carry;

    if (i >= 0) {
      sum += a[i--] - '0';
    }

    if (j >= 0) {
      sum += b[j--] - '0';
    }

    result += (sum % 2) + '0';

    carry = sum / 2;
  }

  reverse(result.begin(), result.end());

  return result;
}



int main() {

  string a, b;

  cin >> a >> b;

  cout << addBinary(a, b);

  return 0;
}
