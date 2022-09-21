class Solution 
{
public:
    vector<vector<TreeNode *>> levels;
    void levelOrderTraversal(TreeNode *root)
    {
        if(!root) return;
        queue<TreeNode *>q;
        q.push(root);
        int size;
        while(!q.empty())
        {
            vector<TreeNode *>temp;
            size=q.size();
            while(size--)
            {
                TreeNode *node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                temp.push_back(node);
            }
            levels.push_back(temp);
        }
    }
    TreeNode* reverseOddLevels(TreeNode* root)
    {
        levelOrderTraversal(root);
        for(int e=1;e<levels.size();e+=2)
        {
            int a=0;
            int b=levels[e].size()-1;
            while(a<=b)
            {
                swap(levels[e][a]->val,levels[e][b]->val);
                a++;
                b--;
            }
        }
        return root;
    }
};
