# Merge Sorted Array (In-Place) – C++

## Problem

You are given:

- `nums1` of size `m + n`
- First `m` elements are valid sorted numbers
- Last `n` elements are empty space (usually 0 placeholders)
- `nums2` of size `n` (sorted)

Your task is to merge `nums2` into `nums1` such that:

- Final array is sorted
- Merging is done **in-place**
- No extra array is allowed

---

## Example


Input:
nums1 = {1,2,3,0,0,0}
m = 3

nums2 = {2,5,6}
n = 3

Output:
{1,2,2,3,5,6}


---

## Key Observation

If we merge from the front,
we may overwrite important elements in `nums1`.

So the correct strategy is:

👉 Start merging from the **back**.

---

## Optimal Approach (Two Pointers from End)

### Idea

Use three pointers:

- `i` → last valid element in nums1 (m - 1)
- `j` → last element in nums2 (n - 1)
- `k` → last index of nums1 (m + n - 1)

Compare elements from the back and place the larger one at index `k`.

---

## Pseudocode


i = m - 1
j = n - 1
k = m + n - 1

while i >= 0 AND j >= 0:
if nums1[i] > nums2[j]:
nums1[k] = nums1[i]
i--
else:
nums1[k] = nums2[j]
j--
k--

If elements remain in nums2

while j >= 0:
nums1[k] = nums2[j]
j--
k--


---

## Time Complexity

O(m + n)

Each element is processed once.

---

## Space Complexity

O(1)

No extra array used.

---

## Why This Works

Since nums1 has extra space at the end,
we safely fill it from the back without overwriting
any useful data.

---

## Edge Cases

- nums2 is empty
- nums1 has no valid elements (m = 0)
- All elements of nums2 are smaller
- All elements of nums2 are larger

---

## Interview Tip

This is the merge step of Merge Sort,
but performed in reverse to avoid overwriting data.

---

## Related Problems

- Merge Two Sorted Arrays
- Merge Intervals
- Inversion Count
- K Sorted Lists