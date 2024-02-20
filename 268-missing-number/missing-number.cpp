class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0,s1=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        int n=nums.size();
        s1=(n*(n+1))/2;
        int r=s1-s;
        return r;

    }
};