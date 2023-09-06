class Solution {
public:
    string sortSentence(string s) {
        vector<string>v(10,"");
        for(int i=0;i<s.size();i++){
            int j=i;
            string s1;
            while(!isdigit(s[j])){
                s1+=s[j];
                j++;
            }
            v[s[j]-'0']=s1;
            i=j+1;
        }
        string s2;
        for(int i=0;i<10;i++){
            if(v[i].length()>0){
            s2+=v[i];
            s2+=' ';
            }
        }
        s2.pop_back();
        return s2;
    }
};