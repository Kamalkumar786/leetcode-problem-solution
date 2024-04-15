class Solution {
public:
    int sum = 0;
    void solve(TreeNode* root, string str){
        if(!root) return;
        if(!root->left && !root->right){
            str += to_string(root->val);
            sum += stoi(str);
            return;
        }
        str += to_string(root->val);

        solve(root->left, str);
        solve(root->right, str);
    }
    int sumNumbers(TreeNode* root) {
        string str = "";
        solve(root, str);
        return sum;
    }
};