class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string k(s.size(),'.');
        for(int i=0;i<s.size();i++){
            k[indices[i]]=s[i];
        }
        return k;
    }
};