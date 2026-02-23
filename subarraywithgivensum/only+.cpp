//sliding window



vector<int> subArraySum(vector<int>& arr,int target){


int left = 0;
int sum = 0;

for(int right =0;right<arr.size();right++){


sum+= arr[right];

while(sum > target){
    sum -= arr[left];
    left++;
}


if(sum == target){
    return {left,right};
}



}


 return {};


}


