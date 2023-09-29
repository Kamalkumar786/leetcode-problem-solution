class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int c=0;
        int c1=0;
        for(int i=1;i<nums.size();i++){
           if(nums[i]<=nums[i-1]) c+=1;
           if(nums[i]>=nums[i-1]) c1+=1;
           
        }
       if(c==nums.size()-1 ||c1==nums.size()-1)return 1;
       return 0;
    }
};