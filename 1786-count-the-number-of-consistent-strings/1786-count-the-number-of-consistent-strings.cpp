class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        unordered_set<char>s;
        for(int i=0;i<allowed.size();i++){
            s.insert(allowed[i]);
        }
        for(int i=0;i<words.size();i++){
            int f=0;
            for(int j=0;j<words[i].size();j++){
                if(s.find(words[i][j])==s.end()){
                    f=1;
                    break;
                }
            }
            if(f==0)c++;
        }
        return c;
    }
};