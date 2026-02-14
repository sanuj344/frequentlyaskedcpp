// brute force

vector<int> twosum(vector<int>& arr,int target){



int n = arr.size();

for(int i=0;i<n;i++){

for(int j=i+1;j<n;j++){
    if(arr[i]+arr[j] == target){
        return {i,j};
    }
}

}

return {};

}



// optimal using hashing

vector<int> twosum(vector<int> &arr,int target){



unordered_map<int,int> mp; // value->index

for(int i=0;i <arr.size();i++){
    int need = target - arr[i];

    if(mp.find(need) != mp.end()){
        return {mp[need],i};
    }
    mp[arr[i]] =i;

}



return {};



}