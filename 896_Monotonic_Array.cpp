class Solution 
{
public:
    bool isMonotonic(vector<int>& nums) 
    {
        bool inc=true;
        bool dec=true;
        for(int e=0;e<nums.size()-1;e++)
        {
            if(nums[e]>nums[e+1]) inc=false;
            if(nums[e]<nums[e+1]) dec=false;
        }
        return inc || dec;
    }
};
