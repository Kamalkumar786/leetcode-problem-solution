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
 vector<int>l;
    int mini=INT_MAX;
    void fun(TreeNode* root){
        if(root==NULL)
            return ;
        fun(root->left);
        l.push_back(root->val);
        fun(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        fun(root);
        for(int i=1;i<l.size();i++){
        if(abs(l[i-1]-l[i])<mini)
            mini=abs(l[i-1]-l[i]);}
    return mini;
    }
};