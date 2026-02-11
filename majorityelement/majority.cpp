// brute force 


// Har element ke occurrences count karo.


int majorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) count++;
        }

        if (count > n / 2) return arr[i];
    }
    return -1;
}


// approach2 -using hash map

#include<unordered_map>

int majorityElement(int arr[],int n){

unordered_map<int,int> mp;

for(int i=0;i<n;i++){
mp[arr[i]]++;


if(mp[arr[i]] > n/2)
return arr[i];



}

return -1;

}


// Approach 3 — Boyer–Moore Voting Algorithm (INTERVIEW KING)

 // majorityElement agar exist karta hai,
 // toh wo baaki sab ko cancel out kar dega.

// same→ vote increase
//  Different → vote decrease


#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    // Find potential candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) count++;
    }

    return (count > n / 2) ? candidate : -1;
}
