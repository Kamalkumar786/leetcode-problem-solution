class Solution {
public:
   int numSquares(int n) {
    queue<int> q;
    q.push(n);
    int t = 0;
    while (!q.empty()) {
        int l = q.size();
        t++;
        while (l > 0) {
            n = q.front();
            q.pop();
            for (int j = std::sqrt(n); j > 0; j--) {
                int next = n - j * j;
                q.push(next);
                if (next == 0) {
                    return t;
                }
            }
            l--;
        }
    }
    return t;
}
};
