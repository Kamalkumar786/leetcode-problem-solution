class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        string s="";
        while(i<word.size()){
            s=word[i]+s;
            if(word[i]==ch) break;
            i++;
        }
        
        if(i>=word.size()) return word;
        i++;
         while(i<word.size()){
                s+=word[i];
                i++;
            }
    return s;
    }
};