# Maximum Difference in an Array (C++)

## Problem
Given an array `arr[]`, find the maximum difference `arr[j] - arr[i]`
such that `j > i`.

---

## Example
Input: {2, 3, 10, 6, 4, 8, 1}
Output: 8
Explanation: 10 - 2 = 8


---

## Approach (Optimal - O(n))

### Idea
- Keep track of the minimum element so far.
- At each index, calculate the difference between current element and minimum.
- Update the maximum difference.

---

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int maximumDifference(int arr[], int n) {
    if (n < 2) return 0;

    int minElement = arr[0];
    int maxDiff = arr[1] - arr[0];

    for (int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, arr[i] - minElement);
        minElement = min(minElement, arr[i]);
    }

    return maxDiff;
}
Complexity
Time: O(n)

Space: O(1)

Edge Cases
Array size < 2

All decreasing elements

Negative numbers

Interview Tip
This problem is a classic example of using a greedy + single-pass approach.


---

## 🔥 Want to continue?
Next logical interview questions from this:
- Maximum Subarray Sum (Kadane)
- Best Time to Buy & Sell Stock
- Minimum Difference in Array
- Prefix Min / Prefix Max problems

👉 **Tell me which one next** 😄