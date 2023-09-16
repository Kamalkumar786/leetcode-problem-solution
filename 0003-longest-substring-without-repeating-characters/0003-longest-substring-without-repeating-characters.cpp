class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        if(str.size()==0)
           return 0;
        unordered_set<int>s;
        int j=0;
        int maxi=INT_MIN;
        for(int i=0;i<str.size();i++){
            if(s.find(str[i])!=s.end()){
                while(j<i && s.find(str[i])!=s.end()){
                    s.erase(str[j]);
                    j++;
                }
            }
            s.insert(str[i]);
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};