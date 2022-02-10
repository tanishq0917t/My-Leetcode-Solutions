#include <bits/stdc++.h>
using namespace std;
typedef struct _bstNode
{
    int data;
    struct _bstNode *left;
    struct _bstNode *right;
} BSTNode;
BSTNode *root = NULL;
BSTNode *createNode()
{
    BSTNode *t;
    t = (BSTNode *)malloc(sizeof(BSTNode));
    t->left = NULL;
    t->right = NULL;
    return t;
}

void insertNode(int data)
{
    BSTNode *t, *j;
    t = createNode();
    t->data = data;
    if (!root)
    {
        root = t;
        return;
    }
    j = root;
    while (1)
    {
        if (t->data > j->data) // right case
        {
            if (j->right == NULL) // adding node to end
            {
                j->right = t;
                break;
            }
            else
            {
                j = j->right; // iterating over right node
            }
        }
        else // left case
        {
            if (j->left == NULL) // adding node to end
            {
                j->left = t;
                break;
            }
            else // iterating over left node
            {
                j = j->left;
            }
        }
    }
}
int maxSum(BSTNode *node,int &maxx)
{
    if(!node) return 0;
    int left=max(0,maxSum(node->left,maxx));
    int right=max(0,maxSum(node->right,maxx));
    maxx=max(maxx,left+right+node->data);
    return max(left,right)+node->data;
}
int maxPathSum(BSTNode* root) 
{
    int maxx=INT_MIN;
    maxSum(root,maxx);
    return maxx;
}
int main()
{
    insertNode(5);
    insertNode(3);
    insertNode(4);
    insertNode(6);
    insertNode(2);
    insertNode(1);
    insertNode(7);
    insertNode(9);
    insertNode(8);
    insertNode(0);
    insertNode(-1);
    cout<<"Maximum Path Sum of Tree is: "<<maxPathSum(root)<<endl;
    return 0;
}
