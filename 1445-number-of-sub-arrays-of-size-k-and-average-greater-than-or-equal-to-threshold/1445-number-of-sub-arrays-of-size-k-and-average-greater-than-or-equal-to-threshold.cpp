class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        if(nums.size()==1)
         return nums[0]/k;
         int t=k*threshold;
         double s=0;
         double c=0;
         int g=0;
         for(int i=0;i<k;i++){
             s+=nums[i];
         }
         if(s>=t){
               g++;
           }
         for(int j=k;j<nums.size();j++){
            
            s-=nums[c++];
            s+=nums[j];
           if(s>=t){
               g++;
           }
         }
         return g;
    }
};