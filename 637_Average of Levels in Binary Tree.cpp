class Solution {
public:
    vector<vector<int>>levelOrderTraversal(TreeNode *root)
    {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>tmp;
            while(size--)
            {
                TreeNode *node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                tmp.push_back(node->val);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<vector<int>>v=levelOrderTraversal(root);
        vector<double>ans;
        for(vector<int> a:v)
        {
            ans.push_back(accumulate(a.begin(),a.end(),0.0)/a.size());
        }
        return ans;
    }
};
