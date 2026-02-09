# Move Zeroes (C++)

## Problem
Move all zeros to the end while keeping the relative order
of non-zero elements.

---

## Example
Input: {0,1,0,3,12}
Output: {1,3,12,0,0}


---

## Optimal Approach (Two Pointer)

### Idea
Keep a pointer `j` for the next position of non-zero.
Traverse array and swap whenever non-zero is found.

---

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
Complexity
Time: O(n)

Space: O(1)

Interview Tip
Classic two-pointer + in-place modification problem.


---

---

# 🔥 Skill You Just Built
You learned:

✅ two pointers  
✅ stable arrangement  
✅ in-place array manipulation  

This pattern is used in:
- remove duplicates  
- partition array  
- Dutch national flag  
- quicksort partition