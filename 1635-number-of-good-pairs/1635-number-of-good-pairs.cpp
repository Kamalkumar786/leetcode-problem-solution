class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int s=0;
        for(auto it:mpp){
            int k=it.second;
            s+=k*(k-1)/2;
        }
        return s;
        
    }
};