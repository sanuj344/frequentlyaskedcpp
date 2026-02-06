

# Find Second Largest Element in an Array (C++)

This repository demonstrates **three common approaches** to find the **second largest element** in an array using C++.  
Each approach differs in **time complexity**, **space usage**, and **interview suitability**.

---

## Problem Statement

Given an array of integers, find the **second largest distinct element**.

### Example
Input: {12, 35, 1, 10, 34}
Output: 34


### Edge Cases
- Array size < 2 → return `-1`
- All elements same → return `-1`
- Negative numbers should be handled correctly

---

## Approach 1: Sorting Method (Brute Force)

### Idea
1. Sort the array in ascending order.
2. The largest element will be at the last index.
3. Traverse backwards to find the first element smaller than the largest.

### Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
    sort(arr, arr + n);

    int largest = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest)
            return arr[i];
    }
    return -1;
}
Complexity
Time: O(n log n)

Space: O(1) (in-place sort)

Notes
Modifies the original array

Simple but not optimal for interviews

Approach 2: Two-Pass Traversal
Idea
First pass → find the largest element.

Second pass → find the largest element smaller than the maximum.

Code
#include <climits>

int secondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
        largest = max(largest, arr[i]);

    int second = INT_MIN;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] < largest) {
            second = max(second, arr[i]);
            found = true;
        }
    }

    return found ? second : -1;
}
Complexity
Time: O(n)

Space: O(1)

Notes
Does not modify the array

Safer than sorting

Slightly more logic

Approach 3: Single-Pass Optimal Solution (Recommended)
Idea
Maintain two variables:

largest

secondLargest

Update both in one traversal.

Code
#include <climits>

int secondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int largest = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;
}
Complexity
Time: O(n)

Space: O(1)

Notes
Most efficient

Preferred in interviews

Requires careful condition handling

Comparison Summary
Approach	Time	Space	Modifies Array	Interview Friendly
Sorting	   O(n log n)	O(1)	Yes	❌
Two Pass	O(n)	O(1)	No	✅
Single Pass	O(n)	O(1)	No	⭐⭐⭐
Conclusion
Use sorting for simplicity

Use two-pass for clarity

Use single-pass for interviews and optimal performance