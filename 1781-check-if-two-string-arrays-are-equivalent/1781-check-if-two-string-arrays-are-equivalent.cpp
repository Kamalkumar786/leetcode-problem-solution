class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="";
        string s1="";
        for(int i=0;i<word1.size();i++){
            s+=word1[i];
        }
         for(int j=0;j<word2.size();j++){
            s1+=word2[j];
        }
        if(s==s1)return 1;
        return 0;
    }
};