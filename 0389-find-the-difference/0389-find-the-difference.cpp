class Solution {
public:
    char findTheDifference(string s, string t) {
      int s1=0,s2=0;
      s2=t[s.size()];
    for(int i=0;i<s.size();i++){
      s1+=(s[i]);
      s2+=(t[i]);
      cout<<s1<<endl;
    }
   return char(abs(s2-s1));
    }
};