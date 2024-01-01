class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cc = 0;
        int ci = 0;
        while (ci< s.size() && cc < g.size()) {
            if (s[ci] >= g[cc]) {
                cc++;
            }
            ci++;
        }
        return cc;
    }
};