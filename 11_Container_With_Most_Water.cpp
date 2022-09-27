class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int ans=0;
        int e=0,f=height.size()-1;
        while(e<f)
        {
            if(height[e]<=height[f])
            {
                ans=max(ans,height[e]*(f-e));
                e++;
            }
            else
            {
                ans=max(ans,height[f]*(f-e));
                f--;
            }
        }
        return ans;
    }
};
