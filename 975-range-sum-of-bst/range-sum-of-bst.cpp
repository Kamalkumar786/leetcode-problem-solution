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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int s=0;
        if(root==NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* root=q.front();
            q.pop();
            if((root->val>=low) &&(root->val<=high))
            {
                s+=root->val;
            }
            if(root->left!=NULL)
                q.push(root->left);
            if(root->right!=NULL)
                q.push(root->right);
        }
      return s;  
    }
};