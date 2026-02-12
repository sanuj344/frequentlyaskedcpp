# Kadane’s Algorithm (Maximum Subarray Sum)

## Problem
Find the contiguous subarray with the largest sum.

---

## Example
{-2,1,-3,4,-1,2,1,-5,4}
Output → 6


---

## Optimal Idea
If running sum becomes negative → reset it.

---

## Code
```cpp
int maxSubArray(int arr[], int n) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}
Complexity
Time: O(n)

Space: O(1)