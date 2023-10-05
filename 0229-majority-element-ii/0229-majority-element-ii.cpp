class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int s=nums.size()/3;
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>s)
            v.push_back(x.first);
        }
        return v;
    }
};