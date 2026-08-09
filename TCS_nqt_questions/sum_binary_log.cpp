// # TCS PYQ – Problem 1

// ## Problem Statement

// You are given two integers **L** and **R**.

// For every integer **x** in the range **L** to **R** (inclusive):

// 1. Calculate **floor(log₂(x))**, where **floor(log₂(x))** is the largest integer **k** such that **2ᵏ ≤ x**.
// 2. Add all these values together.

// Return the final sum.

// ### Example

// **Input:**

// ```
// L = 2
// R = 8
// ```

// **Calculation:**

// ```
// 2 → 1
// 3 → 1
// 4 → 2
// 5 → 2
// 6 → 2
// 7 → 2
// 8 → 3
// ```

// **Output:**

// ```
// 13
// ```

// ### In Simple Words

// Go through every number from **L** to **R**.

// For each number:

// * Find the exponent of the largest power of 2 that is less than or equal to that number.
// * Add all those exponents together.
// * Return the total sum.

// Brute force approach
// Time Complexity: O ( R - L + 1)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int L, R;
  cin >> L >> R;

  int sum = 0;

  for (int i = L; i <= R; i++) {
    sum += floor(log2(i));
  }

  cout << sum << endl;

  return 0;
}


