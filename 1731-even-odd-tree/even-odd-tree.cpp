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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty()){
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
            }
            ans.push_back(v);
        }
        // for(auto x:ans){
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<ans.size();i++){
            if((i-1)%2==0){
                for(int j=0;j<ans[i].size()-1;j++){
                    if((ans[i][j]<=ans[i][j+1] || ans[i][j]%2!=0))
                        return 0;
                }
                if(ans[i][ans[i].size()-1]%2!=0)return 0; 
            }
                else{
                    for(int j=0;j<ans[i].size()-1;j++){
                        if((ans[i][j]>=ans[i][j+1] || ans[i][j]%2==0))
                            return 0;
                            
                        }
                    if(ans[i][ans[i].size()-1]%2==0)return 0; 
                    }
            }
      
        return 1;

    }
};