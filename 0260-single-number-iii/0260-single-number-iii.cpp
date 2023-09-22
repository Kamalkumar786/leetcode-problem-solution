class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
           m[arr[i]]++;
        }
        for(auto k:m ){
            if(k.second==1){
                v.push_back(k.first);
            }
        }
        return v;
    }
};