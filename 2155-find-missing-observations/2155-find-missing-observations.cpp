class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int ts= mean * (n + m);
        int cs= accumulate(rolls.begin(), rolls.end(), 0);
        int ms= ts - cs;
        if (ms < n || ms > 6 * n) {
            return {};
        }
        vector<int> r(n, 1);
        ms-= n;
        for (int i = 0; i <n&& ms> 0; i++) {
            int a = min(5, ms);
            r[i] += a;
            ms-= a;
        }
        return r;
    }
};
