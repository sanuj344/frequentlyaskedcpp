// brute force

#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(int arr[],int n){

vector<int> ans;

for(int i=0;i<n;i++){


bool leader = true;
for(int j =i+1;j<n;j++){

if(arr[j] >arr[i]){


    leader=false;
    break;
}

}
if(leader){
    ans.push_back(arr[i]);
}


}


return ans;


}


//optimal reverse traversal


// rightmost always leader


// agar current >= maxright -> leader
// else not leader

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[],int n) {

vector<int> ans;

int maxRight = arr[n-1]; // last element
ans.push_back(maxRight);

// traverse from right

for(int i =n-2; i>=0;i--){


if(arr[i] >= maxRight){

     maxRight = arr[i];
     ans.push_back(arr[i]);
}





}



   // reverse because we collected from right
    reverse(ans.begin(), ans.end());

    return ans;






}