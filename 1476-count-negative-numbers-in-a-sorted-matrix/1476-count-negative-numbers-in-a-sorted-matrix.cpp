class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int c=0;
        for(int i=0;i<=grid.size()-1;i++){
            int s=grid[i].size();
            for(int j=0;j<s;j++){
                if(grid[i][j]<0){
                    c++;
                }
            }
        }
        return c;
        
        
        
    }
};