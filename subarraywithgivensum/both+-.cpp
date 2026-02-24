vector<int> subarraySum(vector<int>& arr, int target) {
    unordered_map<int,int> mp;  // prefixSum -> index
    int prefixSum = 0;

    for(int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if(prefixSum == target) {
            return {0, i};
        }

        if(mp.find(prefixSum - target) != mp.end()) {
            return {mp[prefixSum - target] + 1, i};
        }

        mp[prefixSum] = i;
    }

    return {};
}