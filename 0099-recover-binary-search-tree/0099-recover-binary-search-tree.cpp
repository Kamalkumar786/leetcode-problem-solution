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

    vector<TreeNode*>v;
    void trav(TreeNode* root){
        if(root==NULL)
            return ;
        trav(root->left);
        v.push_back(root);
        trav(root->right);
    }
    void recoverTree(TreeNode* root) {
        trav(root);
        TreeNode*x=NULL;
        TreeNode*y=NULL;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]->val>v[i+1]->val){
                y=v[i+1];
                if(x==NULL)
                    x=v[i];
                else
                    break;
            }
        }
        swap(x->val,y->val);
        
    }
};