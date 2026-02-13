# Leaders in an Array (C++)

## Problem
An element is a leader if all elements to its right are smaller.

---

## Example
{16, 17, 4, 3, 5, 2}
Output → {17,5,2}


---

## Optimal Approach

### Idea
Traverse from right, keep max so far.

If current >= max → leader.

---

## Code
```cpp
vector<int> leaders(int arr[], int n) {
    vector<int> ans;

    int maxRight = arr[n - 1];
    ans.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
Complexity
Time: O(n)

Space: O(n)