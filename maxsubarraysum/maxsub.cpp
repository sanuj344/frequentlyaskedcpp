// brute force

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int ar[],int n){

int maxSum = INT_MIN;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=arr[j];
        maxSum = max(maxSum,sum);

    }
}


return maxSum;

}



//optimal kadanes algorithm


int maxSubArray(int arr[],int n){

 
int currentSum=0;
int maxSum = INT_MIN;


for(int i=0;i<n;i++){

currentSum+=arr[i];

maxSum = max(maxSum,currentSum);

if(currentSum <0){
    currentSum=0;
}


return maxSum;


}







}