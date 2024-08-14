class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>v(nums.size(),0);
       int k=0,n=1;
       for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
               v[k]=nums[i];
               k+=2;
           }
           else{
               v[n]=nums[i];
               n+=2;
           }
       }
       return v;
    }
};