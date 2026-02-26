// brute force

int findPeakElement(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        bool left = (i == 0 || nums[i] > nums[i - 1]);
        bool right = (i == n - 1 || nums[i] > nums[i + 1]);

        if (left && right)
            return i;
    }

    return -1;
}

O(n)
// optimal using binary search

int findPeakElement(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}


O(log n)