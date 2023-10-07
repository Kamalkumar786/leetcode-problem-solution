class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int f=0,mini=INT_MAX,n=words.size();
        vector<int>v;
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                v.push_back(i);
                f=1;
            }
        }
        if(f==0)return -1;
        for(int i=0;i<v.size();i++){
            int k=abs(v[i]-startIndex);
            mini=min({mini, k, n-k});            
        }
        return mini;
    }
};