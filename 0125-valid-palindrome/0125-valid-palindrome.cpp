class Solution {
public:
    bool check(int i, int n, vector<char>& s) {
        if (i >= n / 2) return true;
        if (s[i] != s[n - i - 1]) return false;
        return check(++i, n, s);
    }

    bool isPalindrome(string s) {
        vector<char> s1;
        for (char c : s) {
            if (isalnum(c)) s1.push_back(tolower(c));
        }
        return check(0, s1.size(), s1);
    }
};