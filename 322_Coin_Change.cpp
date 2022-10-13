class Solution {
public:
    int coinChange(vector<int>& x, int value) 
    {
        int n=x.size();
        int dp[n+1][value+1];
        for(int e=1;e<=value;e++)dp[0][e]=INT_MAX;
        for(int e=1;e<=n;e++)dp[e][0]=0;
        for(int e=1;e<=n;e++)
        {
            for(int f=1;f<=value;f++)
            {
            if(x[e-1]<=f)
            {
                if(dp[e][f-x[e-1]]==INT_MAX)dp[e][f]=dp[e-1][f];
                else dp[e][f]=min(dp[e][f-x[e-1]]+1,dp[e-1][f]);
            }
            else dp[e][f]=dp[e-1][f];
            }
        }
        /*
        for(int e=0;e<=n;e++)
        {
        for(int f=0;f<=value;f++)
        {
        printf("%10d ",dp[e][f]);
        }
        cout<<endl;
        }
        */
        int min=INT_MAX;
        for(int e=0;e<=n;e++)
        {
        if(min>dp[e][value])min=dp[e][value];
        }
        if(min==INT_MAX) return -1;
        return min;
    }
};
