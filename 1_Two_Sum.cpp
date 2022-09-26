class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v;
        for(int e=0;e<nums.size()-1;e++)
        {
            for(int f=e+1;f<nums.size();f++)
            {
                if(nums[e]+nums[f]==target)
                {
                    v.push_back(e);
                    v.push_back(f);
                    return v;
                }
            }
        }
        return v;
    }
};
