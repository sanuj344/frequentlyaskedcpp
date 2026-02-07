#include <bits/stdc++.h>
using namespace std;

int maximumDifference(int arr[], int n) {
    if (n < 2) return 0;

    int maxDiff = INT_MIN;

    // pick every element as arr[i]
    for (int i = 0; i < n - 1; i++) {

        // compare with elements after it
        for (int j = i + 1; j < n; j++) {

            maxDiff = max(maxDiff, arr[j] - arr[i]);
        }
    }

    return maxDiff;
}




#include <bits/stdc++.h>
using namespace std;

int maximumDifference(int arr[], int n) {
    if (n < 2) return 0;

    int minElement = arr[0];   // smallest element so far
    int maxDiff = arr[1] - arr[0];

    for (int i = 1; i < n; i++) {

        // Update maximum difference
        maxDiff = max(maxDiff, arr[i] - minElement);

        // Update minimum element
        minElement = min(minElement, arr[i]);
    }

    return maxDiff;
}
