class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int>v;
        for(int e=0;e<nums.size();e++)
        {
            int sum=0;
            for(int j=0;j<=e;j++)
            {
                sum+=nums[j];
            }
            v.push_back(sum);
        }
        return v;
    }
};
