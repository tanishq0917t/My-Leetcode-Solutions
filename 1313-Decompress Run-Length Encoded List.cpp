class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        vector<int> list;
        for(int e=0;e<nums.size();e+=2)
        {
            for(int j=0;j<nums[e];j++)
            {
                list.push_back(nums[e+1]);
            }
        }
        return list;
    }
};
