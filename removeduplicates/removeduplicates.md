# Remove Duplicates from Sorted Array (C++)

## Problem
Given a sorted array, remove duplicates in-place and return
the number of unique elements.

---

## Example
Input: {1,1,2}
Output: 2
Array → {1,2,_}


---

## Optimal Approach (Two Pointer)

### Idea
Since duplicates are adjacent, keep a pointer `i`
for last unique element and traverse with `j`.

When new value found → move it forward.

---

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}
Complexity
Time: O(n)

Space: O(1)

Interview Tip
Works because array is sorted.


---

---

# 🔥 Pattern You Just Learned
This is base of:

✅ remove duplicates  
✅ unique elements  
✅ compress array  
✅ frequency grouping 