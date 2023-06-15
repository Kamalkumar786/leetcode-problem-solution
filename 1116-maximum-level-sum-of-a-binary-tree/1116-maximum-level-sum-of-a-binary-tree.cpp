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
    int maxLevelSum(TreeNode* root) {
        int sum = INT_MIN, ans, c = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
         {
             int s=0;
            int n=q.size();
            while(n--){
                TreeNode* t=q.front();
                 q.pop();
                 s+=t->val;
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            if(s>sum){
                sum=s;
                ans=c;
                }
                c++;
            }
            return ans;
    }
};