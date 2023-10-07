class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n=words.size();
      int c=0;
       for(int i=0;i<n;i++){
          set<char>s1(words[i].begin(),words[i].end());
          for(int j=i+1;j<n;j++)
          {
              set<char>s2(words[j].begin(),words[j].end());
                if(s1==s2)c++;
          }
       }
       return c;
    }
};