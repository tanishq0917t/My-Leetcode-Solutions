class Solution 
{
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        dfs(nums,0);
        return ans;
    }
    void dfs(vector<int>& nums,int i)
    {
        if(i>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        dfs(nums,i+1);
        temp.pop_back();
        dfs(nums,i+1);
    }
};
