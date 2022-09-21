class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int>v;
        int a=0;
        int b=n;
        for(int e=0;e<nums.size();e++)
        {
            if(e%2==0)
            {
                v.push_back(nums[a]);
                a++;
            }
            else
            {
                v.push_back(nums[b]);
                b++;
            }
        }
        return v;
    }
};
