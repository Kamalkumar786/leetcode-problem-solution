class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        unordered_set<int>s1(n1.begin(),n1.end());
         unordered_set<int>s2(n2.begin(),n2.end());
         vector<int>v;
         for(auto k:s1){
             if(s2.find(k)!=s2.end()){
                 v.push_back(k);
             }
         }
         return v;
    }
};