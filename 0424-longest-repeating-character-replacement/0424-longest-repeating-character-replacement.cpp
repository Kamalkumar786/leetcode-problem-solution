class Solution {
public:
    int characterReplacement(string s, int k) {
       int n = s.size();
        int i = 0, j = 0, maxi = 0;
        unordered_map<char,int>mp;
        int ans = -1;
        while(i < n)
        {
            mp[s[i]]++;
            maxi = max(maxi, mp[s[i]]);
            if((i-j+1) - maxi > k){
                mp[s[j]]--;
                j++;
            }
            ans = max(ans, (i-j+1));
            i++;   
        }
        return ans;
    }
};