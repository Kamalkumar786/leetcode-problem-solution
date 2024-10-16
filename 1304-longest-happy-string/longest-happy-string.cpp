class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res = "";
        while (a > 0 || b > 0 || c > 0) {
            if ((a >= b && a >= c && (res.size() < 2 || res.back() != 'a' || res[res.size() - 2] != 'a'))) {
                res += 'a';
                a--;
            } else if ((b >= a && b >= c && (res.size() < 2 || res.back() != 'b' || res[res.size() - 2] != 'b'))) {
                res += 'b';
                b--;
            } else if (c > 0 && (res.size() < 2 || res.back() != 'c' || res[res.size() - 2] != 'c')) {
                res += 'c';
                c--;
            } else if (a > 0 && res.back() != 'a') {
                res += 'a';
                a--;
            } else if (b > 0 && res.back() != 'b') {
                res += 'b';
                b--;
            } else if (c > 0 && res.back() != 'c') {
                res += 'c';
                c--;
            } else {
                break;  // No valid character to add without repeating.
            }
        }
        return res;
    }
};
