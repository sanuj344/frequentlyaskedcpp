// brute force

#include <bits/stdc++.h>
using namespace std;

// Function to find the second largest element in the array
int secondLargest(int arr[], int n) {

    // Step 1: Sort the array in ascending order
    // After sorting: smallest elements come first,
    // largest element will be at index (n - 1)
    sort(arr, arr + n);

    // Step 2: Store the largest element (last element after sorting)
    int largest = arr[n - 1];

    // Step 3: Traverse the array from second last element towards the beginning
    // We do this because the second largest element
    // must be just smaller than the largest
    for (int i = n - 2; i >= 0; i--) {

        // Step 4: Check if current element is different from the largest
        // This handles cases where the largest element appears multiple times
        if (arr[i] != largest)
            return arr[i];   // This is the second largest element
    }

    // Step 5: If all elements are equal (no second largest exists)
    return -1;
}


// two pass approach


int secondLargest(int arr[], int n) {

    // If array has less than 2 elements,
    // second largest cannot exist
    if (n < 2) return -1;

    // Step 1: Find the largest element in the array
    int largest = INT_MIN;  // Initialize with smallest possible integer

    for (int i = 0; i < n; i++)
        // Update largest if current element is bigger
        largest = max(largest, arr[i]);

    // Step 2: Find the largest element smaller than 'largest'
    int second = INT_MIN;  // To store second largest element

    for (int i = 0; i < n; i++) {
        // Ignore elements equal to largest
        // Consider only elements smaller than largest
        if (arr[i] < largest)
            second = max(second, arr[i]);
    }

    // Step 3: If second largest was never updated,
    // it means all elements are equal
    return (second == INT_MIN) ? -1 : second;
}


// two pass 


int secondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int largest = INT_MIN, second = INT_MIN;
    bool foundSecond = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
            foundSecond = true;
        }
    }

    return foundSecond ? second : -1;
}

