# Majority Element (C++)

## Problem
Find element appearing more than n/2 times.
Return -1 if not present.

---

## Example
{2,2,1,1,1,2,2} → 2


---

## Optimal Approach - Boyer Moore Voting

### Idea
Majority element cancels out others.

---

## Code
```cpp
int majorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate) count++;
        else count--;
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) count++;
    }

    return (count > n / 2) ? candidate : -1;
}
Complexity
Time: O(n)

Space: O(1)


---

---

# 🔥 What you just unlocked
You now know:
- Greedy cancellation
- Voting algorithm
- Space optimized frequency