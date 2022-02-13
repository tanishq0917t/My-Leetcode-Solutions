class Solution 
{
public:
    int maxLevelSum(TreeNode* root) 
    {
        vector<vector<int>>levels=levelOrderTraversal(root);
        int ans=1;
        int maxSum=INT_MIN;
        int count=1;
        for(vector<int>e:levels)
        {
            int sum=0;
            sum=accumulate(e.begin(),e.end(),sum);
            //cout<<sum<<endl;
            if(sum>maxSum)
            {
                maxSum=sum;
                ans=count;
            }
            count++;
        }
        return ans;
    }
    vector<vector<int>>levelOrderTraversal(TreeNode *root)
    {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode *>q;
        q.push(root);
        int size;
        while(!q.empty())
        {
            vector<int>temp;
            size=q.size();
            while(size--)
            {
                TreeNode *node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                temp.push_back(node->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
