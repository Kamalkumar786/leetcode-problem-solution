class Solution {
private:
    bool fun(string s, string t,int sind,int tind){
         if (sind == s.size()) return true;
        if (tind == t.size()) return false;
        if (s[sind] == t[tind])
            return fun(s, t, sind + 1, tind+ 1);
        return fun(s, t, sind, tind+ 1);
    }
public:
    bool isSubsequence(string s, string t) {
        return fun(s,t,0,0);
    }
};