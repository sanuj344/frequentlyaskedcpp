// brute force

#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vecctor<int> & arr1,vector<int> & arr2){

vector<int> result;

for(int x : arr1)
result.push_back(x);
  

for(int x : arr2)
result.push_back(x);

 // Sort final array
  sort(result.begin(), result.end());


return result;

}



// optimal approach

vector<int> mergeArrays(vecctor<int> & arr1,vector<int> & arr2){

int i=0,j=0;

vector<int> result;

while(i<arr1.size() && j<arr2.size()){


if(arr1[i] < arr2[j]){

    result.push_back(arr1[i]);
    i++;
}
else{
    result.push_back(arr2[j]);
    j++;
}


}

    // Remaining elements of arr1
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }
    // Remaining elements of arr1
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }



return result;



}