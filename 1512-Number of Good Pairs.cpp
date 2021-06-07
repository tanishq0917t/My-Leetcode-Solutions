class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int count=0;
        for(int e=0;e<nums.size();e++)
        {
            for(int j=e+1;j<nums.size();j++)
            {
                if(nums[e]==nums[j])count++;
            }
        }
        return count;
    }
};
