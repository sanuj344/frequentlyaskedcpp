# Count Unique Elements (C++)

## Problem
Count the number of distinct elements in the array.

---

## Example
Input: {1,1,2,2,3,4,4}
Output: 4


---

## Optimal Approach (Sorted Array)

### Idea
Whenever value changes → new unique element.

---

## Code
```cpp
int countUnique(int arr[], int n) {
    if (n == 0) return 0;

    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }

    return count;
}
Complexity
Time: O(n)

Space: O(1)


---

---

# 🔥 Pattern You Are Mastering
You now know:

✅ remove duplicates  
✅ count unique  
✅ compress array  
✅ detect change in sorted data  