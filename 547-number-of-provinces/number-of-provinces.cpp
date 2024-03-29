class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m = isConnected.size();
        int n = isConnected[0].size();
        int c=0;
        queue<int> q;
        vector<int> vis(n, 0);
        for (int i = 0; i < m; i++) {
            if (vis[i] == 0) {
                q.push(i);
                c++;
                vis[i] = 1;
            while (!q.empty()) {
                int p = q.front();
                q.pop();
                for (int i = 0; i < n; i++) {
                    if(isConnected[p][i]==1 &&vis[i]==0){
                        q.push(i);
                        vis[i]=1;
                    }

                }
            }
            }
        }
        return c;
    }
};