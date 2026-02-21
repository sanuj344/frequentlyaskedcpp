//brute force approach

#include<bits/stdc++.h>
using namespace std;


vector<int> topK(vector<int>& arr,int k){


sort(arr.begin(),arr.end(),greater<int>());


vector<int> result;
for(int i=0;i<k;i++){
    result.push_back(arr[i]);
}

return result;

}




// optimal (min heap)


vector<int> topK(vector<int>& arr,int k){

 priority_queue<int, vector<int>, greater<int>> minHeap;


for(int num: arr){
    minHeap.push(num);
    if(minHeap.size() > k){
        minHeap.pop();
    }
}

vector<int> result;
while(!minHeap.empty()){
    result.push_back(minHeap.top());
    minHeap.pop();
}

return result;
}










}