
// for sorted array
// First element always unique

// Jab current ≠ previous → count++

#include<bits/stdc++.h>
using namespace std;

int countUnique(int arr[], int n) {

if(n ==0 ) return 0;

int count =1;

for(int i=1;i<n;i++){
    if(arr[i] != arr[i-1]){
        count++;
    }
}


return count;


}


// Approach 2 — Using Set

#include <set>

int countUnique(int arr[], int n){

set<int> s(arr,arr+n);
return s.size();


}