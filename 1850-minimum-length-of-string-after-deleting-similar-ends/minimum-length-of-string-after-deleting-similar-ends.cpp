class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j && s[i]==s[j]){
                char k=s[i];
                while(i<=j &&s[i]==k){
                    i++;
                }
                while(j>i&&s[j]==k){
                    j--;
                }
            }
        return j-i+1;
    }
};