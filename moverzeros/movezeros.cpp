
// optimal solution

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n) {


int j =0; // position for next non-zero

for (int i = 0;i<n;i++){

if(arr[i] !=0){
    swap(arr[i],arr[j]);
    j++;
}
}



}


// brute force

vector<int> moverZeroes(vector<int>& nums){

    vector<int> temp;

    for(int x : nums){
        if(x != 0){
            temp.push_back(x);
        }}
        while(temp.size() < nums.size ()){
            temp.push_back(0);
        }

    return temp;



}