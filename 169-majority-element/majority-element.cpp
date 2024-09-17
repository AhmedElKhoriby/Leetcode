#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int main=nums.size();
         return nums[main/2];
    }
   
};