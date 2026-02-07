# Best Time to Buy and Sell Stock (C++)

## Problem
Given an array `prices[]`, where `prices[i]` is the price on day i,
buy once and sell later to maximize profit.

Return 0 if no profit is possible.

---

## Example
Input: {7,1,5,3,6,4}
Output: 5


---

## Optimal Approach (O(n))

### Idea
Track:
- Minimum price so far
- Profit if sold today

Update maximum profit.

---

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n) {
    if (n == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        int profit = prices[i] - minPrice;
        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}
Complexity
Time: O(n)

Space: O(1)