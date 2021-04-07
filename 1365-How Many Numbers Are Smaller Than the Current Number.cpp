class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int>v;
        for(int e=0;e<nums.size();e++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[e]>nums[j]) count++;
            }
            v.push_back(count);
        }
        return v;
    }
};
