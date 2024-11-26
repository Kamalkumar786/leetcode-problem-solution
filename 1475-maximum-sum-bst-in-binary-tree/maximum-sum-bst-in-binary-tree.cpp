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
int fun(TreeNode *root,int &mx,int &mn,int &a)
    {
        if(!root) return 0;
        int lmn,rmn,rmx,lmx;
        lmn=rmn=INT_MAX;
        lmx=rmx=INT_MIN;
        int l=fun(root->left,lmx,lmn,a);
        int r=fun(root->right,rmx,rmn,a);
        int val=l+r+root->val;
        if((lmx<(root->val)) and (rmn>(root->val)))
        {
            a=max(a,val);
            mx=max(root->val,rmx);
            mn=min(root->val,lmn);
        }
        else
        {
            mx=INT_MAX;
            mn=INT_MIN;
        }
        return val;        
    }
    public:
    int maxSumBST(TreeNode* root) {
        int a=0;
        int mx=INT_MIN,mn=INT_MAX;
        fun(root,mx,mn,a);
        return a;
    }
};