class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
        int cnt=0;
        int sum=0;
        for(int e:nums)
        {
            if(e%6==0)
            {
                sum+=e;
                cnt++;
            }
        }
        if(cnt==0) return 0;
        return sum/cnt;
    }
};
