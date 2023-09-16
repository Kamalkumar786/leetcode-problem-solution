class Solution {
public:
    int countGoodSubstrings(string str) {
        if(str.size()==0) return 0;
        unordered_set<int>s;
        int j=0;
        int c=0;
        for(int i=0;i<str.size();i++){
            if(s.find(str[i])!=s.end()){
                while(j<i && s.find(str[i])!=s.end()){
                    s.erase(str[j]);
                    j++;
                }
            }
            s.insert(str[i]);
            if(s.size()==3){
                s.erase(str[j]);
                j++;
                c++;
            }
        }
        return c;
    }
};