class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return 0;
         map<char,int>m1;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            m1[t[i]]--;
        }
        for (auto x : m1) {
            if (x.second != 0)
                return 0;
        } 
    return 1;
    }
};