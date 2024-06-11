class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;
        for (int& x : arr1)
            mp[x]++;
        vector<int> output;
        for (int& x : arr2)
            while (mp[x]--)
                output.push_back(x);
        sort(arr1.begin(), arr1.end());
        for (int& x : arr1)
            while (mp[x] > 0 && mp[x]--)
                output.push_back(x);
        return output;
    }
};