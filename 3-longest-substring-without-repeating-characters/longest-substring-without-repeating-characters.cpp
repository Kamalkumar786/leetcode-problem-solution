class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int st=0,maxi=0;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end()&& m[s[i]] >= st){
                st=m[s[i]]+1;
            }
        m[s[i]]=i;
        maxi=max(maxi,i-st+1);
        }
        return maxi;
    }
};