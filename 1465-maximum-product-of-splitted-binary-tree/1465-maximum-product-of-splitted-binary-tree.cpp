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
    vector<int>ts;
    int sum(TreeNode* root){
        int s=root->val;
        if(root->left!=NULL)
         s+=sum(root->left);
        if(root->right!=NULL)
          s+=sum(root->right);
          ts.push_back(s);
        return s;
    }
    int maxProduct(TreeNode* root) {
         long long int t=sum(root);
          long long int  maxi=0;
         for(int i=0;i<ts.size()-1;i++){
             maxi=max(maxi,(t-ts[i])*ts[i]);
         }
        return maxi%(1000000000+7);
    }
};