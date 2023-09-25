class Solution {
public:
    char findTheDifference(string s, string t) {
      int s1=0,s2=0;
    for(int i=0;i<s.size();i++){
      s1+=(s[i]);
      cout<<s1<<endl;
    }
     for(int i=0;i<t.size();i++){
      s2+=(t[i]);
    }
   return char(abs(s2-s1));
    }
};