# Two Sum (Pseudocode Version)

## Problem
Given an array of integers and a target value, return the **indices**
of two numbers such that they add up to the target.

Assumptions:
- Exactly one solution exists.
- Same element cannot be used twice.

---

## Example
Input:
arr = {2,7,11,15}
target = 9

Output:
{0,1}


Explanation:
2 + 7 = 9

---

---

## Approach 1 — Brute Force

### Idea
Try every possible pair and check if their sum equals the target.

---

### Pseudocode
for i from 0 to n-1:
for j from i+1 to n-1:
if arr[i] + arr[j] == target:
return i, j


---

### Complexity
- Time: O(n²)
- Space: O(1)

---

---

## Approach 2 — Optimal Using Hashing ⭐

### Idea
For each element:
required = target - current element

If required element was seen before → we found the answer.

---

### Pseudocode
create empty map

for i from 0 to n-1:
need = target - arr[i]

if need exists in map:
    return map[need], i

store arr[i] with index i in map

---

### Complexity
- Time: O(n)
- Space: O(n)

---

---

## Interview Tip
Instead of searching in the future,
store past elements and check if the complement already exists.

---

---

## Edge Cases
- Negative numbers
- Duplicate values
- Large input sizes