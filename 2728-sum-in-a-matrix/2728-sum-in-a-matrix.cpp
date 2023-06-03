class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        int s=0;
        for(int i=0;i<m;i++){
            sort(nums[i].begin(), nums[i].end(), greater<int>());
            }
        
        for(int i=0;i<n;i++){
             int t=0;
           for(int j=0;j<m;j++){
               t=max(t,nums[j][i]);
           }
             s+=t;
        }
            
        return s;
    }
};