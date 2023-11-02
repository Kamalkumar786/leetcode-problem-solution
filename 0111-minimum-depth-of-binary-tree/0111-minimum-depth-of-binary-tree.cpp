/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int mini=INT_MAX;
    int fun(TreeNode* root,int level){
        if(root==NULL)return 0;
        if(root->left==NULL && root->right==NULL)
        mini=min(mini,level);
        fun(root->left,level+1);
        fun(root->right,level+1);
        return mini;
    }
    int minDepth(TreeNode* root) {
       int level=1;
       return fun(root,level);

    }
};