class Solution
{
public:
    bool findSubarrays(vector<int>& nums)
    {
        set<int> s;
        int temp;
        for(int e=0;e<nums.size()-1;e++)
        {
            temp=s.size();
            s.insert(nums[e]+nums[e+1]);
            if(temp==s.size()) return true;
        }
        return false;
    }
};
