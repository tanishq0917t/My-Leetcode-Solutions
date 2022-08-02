class Solution 
{
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int first=-1,last=-1;
        for(int e=0;e<nums.size();e++)
        {
            if(nums[e]==target)
            {
                first=e;
                break;
            }
        }
        for(int e=nums.size()-1;e>=0;e--)
        {
            if(nums[e]==target)
            {
                last=e;
                break;
            }
        }
        vector<int> v;
        if(first==-1) return v;
        if(first==last) {v.push_back(first);return v;}
        for(int e=first;e<=last;e++)
        {
            v.push_back(e);
        }
        return v;
    }
};
