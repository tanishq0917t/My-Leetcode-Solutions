class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
        int ans=logs[0][0];
        int temp=logs[0][1];
        int mx=temp;
        for(int e=1;e<logs.size();e++)
        {
            temp=logs[e][1]-temp;
            //cout<<temp<<endl;
            if(mx<temp)
            {
                ans=logs[e][0];
                mx=temp;
            }
            if(mx==temp)
            {
                ans=min(logs[e][0],ans);
                mx=temp;
            }
            temp=logs[e][1];
        }
        return ans;
    }
};
