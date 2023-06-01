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
   vector <int> Preorder(TreeNode* curr, vector<int> v){
    
    if(curr==NULL){
        return v;
    }
   
    v.push_back(curr->val);
    v=Preorder(curr->left,v);
    v=Preorder(curr->right,v);
    return v;
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorderTraversal(TreeNode* curr)
{  
    vector<int>v;
    return Preorder(curr,v);
}
};