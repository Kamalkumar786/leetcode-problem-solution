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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> all;
        string path;
        path+=to_string(root->val);
        search(root,path,all);
        return all;
            }
private:
        void search(TreeNode* root,string& path,vector<string>&all){
            assert(root);
            if(!root->left && !root->right) all.push_back(path);
            else{
                if(root->left){
                    path+="->"+to_string(root->left->val);
                    search(root->left,path,all);
                    while(path.back()!='>')path.pop_back();
                     path.pop_back();
                      path.pop_back();
           }
           if(root->right){
               path+="->"+to_string(root->right->val);
               search(root->right,path,all);
               while(path.back()!='>')path.pop_back();
               path.pop_back();
               path.pop_back();
           }
            }
        }
};