# Merge Two Sorted Arrays (Pseudocode)

## Problem
Given two sorted arrays, merge them into a single sorted array.

---

## Example

arr1 = {1,3,5}
arr2 = {2,4,6}

Output:
{1,2,3,4,5,6}


---

---

## Approach 1 — Brute Force

### Idea
Combine both arrays and sort the result.

### Pseudocode

create new array result

copy all elements of arr1 into result
copy all elements of arr2 into result

sort result

return result


### Complexity
- Time: O((n + m) log(n + m))
- Space: O(n + m)

---

---

## Approach 2 — Optimal Two Pointer Method ⭐

### Idea
Since both arrays are already sorted,
compare elements from both arrays using two pointers.

---

### Pseudocode

initialize i = 0
initialize j = 0
create empty result array

while i < size of arr1 AND j < size of arr2:

if arr1[i] <= arr2[j]:
    add arr1[i] to result
    i++
else:
    add arr2[j] to result
    j++
Add remaining elements

while i < size of arr1:
add arr1[i] to result
i++

while j < size of arr2:
add arr2[j] to result
j++

return result


---

### Complexity
- Time: O(n + m)
- Space: O(n + m)

---

---

## Interview Tip
This is the same merging logic used in Merge Sort.