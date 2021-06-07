#include<bits/stdc++.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int>v;
        for(int e=0;e<nums.size();e++)
        {
            v.push_back(nums[e]*nums[e]);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
