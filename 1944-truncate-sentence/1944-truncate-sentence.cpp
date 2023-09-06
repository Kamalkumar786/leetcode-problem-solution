class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1="";
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') c++;
            if(c==k) break;
            s1+=s[i];
        }
        return s1;
    }
};