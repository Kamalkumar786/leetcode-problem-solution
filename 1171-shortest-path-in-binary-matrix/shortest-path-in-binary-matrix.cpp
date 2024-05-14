class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {1, -1}, {1, 1}, {-1, 0}, {-1, -1}, {-1, 1}};
        vector<vector<int>> vis(n, vector<int>(n, 0));
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = 1;
        grid[0][0] = 1;
        while (!q.empty()) {
            auto t = q.front();
            q.pop();
            int i = t.first;
            int j = t.second;
            for (auto& dir : directions) {
                int r = i + dir[0];
                int c = j + dir[1];
                if (r >= 0 && c >= 0 && r < n && c < n && vis[r][c] == 0 && grid[r][c] == 0) {
                    grid[r][c] = grid[i][j] + 1;
                    q.push({r, c});
                    vis[r][c] = 1;
                }
            }
        }
        if (grid[n-1][n-1] == 0) return -1;
        return grid[n-1][n-1];
    }
};

