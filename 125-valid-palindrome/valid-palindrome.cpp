class Solution {
public:
    bool isPalindrome(string s) {
        string ts="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' || !isalnum(s[i]))continue;
            ts+=tolower(s[i]);
        }
        int i=0,j=ts.size()-1;
        while(i<j){
            if(ts[i]!=ts[j]) return 0;
            i++;j--;
        }
        return 1;
    }
};