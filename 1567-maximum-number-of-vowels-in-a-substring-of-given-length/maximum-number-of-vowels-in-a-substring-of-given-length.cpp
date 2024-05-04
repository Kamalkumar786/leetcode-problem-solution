class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0, j = 0;
        int c = 0;
        int maxi = 0;
        while (i < s.size()) {
            if ((i - j + 1) <= k) {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    c++;
                i++;
            } else {
                maxi = max(maxi, c);
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                    c--;
                j++;
            }
        }
        maxi = max(maxi, c); 
        return maxi;
    }
};
