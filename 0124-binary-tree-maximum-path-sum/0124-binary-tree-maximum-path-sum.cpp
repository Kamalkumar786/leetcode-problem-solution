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
    int msp(TreeNode* root,int & maxi){
        if(root==NULL)
            return 0;
        int lh=max(0,msp(root->left,maxi));
        int rh=max(0,msp(root->right,maxi));
        int v=root->val;
        maxi = max(maxi, ((lh + rh) + v));
        return max(lh, rh) + v;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        msp(root,maxi);
        return maxi;
    }
};