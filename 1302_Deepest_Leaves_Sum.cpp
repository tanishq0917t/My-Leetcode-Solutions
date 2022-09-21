class Solution
{
public:
    map<int,vector<int>> mp;
    void iterate(int level,TreeNode *root)
    {
        if(!root) return;
        mp[level].push_back(root->val);
        iterate(level+1,root->left);
        iterate(level+1,root->right);
    }
    int deepestLeavesSum(TreeNode* root)
    {
        if(!root) return 0;
        iterate(0,root);
        vector<int> v;
        int max=-1;
        for(auto it:mp)
        {
            if(max<it.first)
            {
                max=it.first;
                v=it.second;
            }
        }
        return accumulate(v.begin(),v.end(),0);
    }
};
