class Solution {
public:
    int c = 0;
    int fun(TreeNode* node) {
        if (!node) return 1;
        int left = fun(node->left);
        int right = fun(node->right);
        if (left == 0 || right == 0) {
            c++;
            return 2;
        }
        if (left == 2 || right == 2) {
            return 1;
        }
        return 0;
    }
    int minCameraCover(TreeNode* root) {
        if (fun(root) == 0) c++;
        return c;
    }
};
