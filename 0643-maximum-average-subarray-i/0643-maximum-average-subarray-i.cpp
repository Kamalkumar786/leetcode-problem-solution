class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1)
         return nums[0]/k;
         double s=0;
         double c=0;
        //  float ans=0;
         for(int i=0;i<k;i++){
             s+=nums[i];
         }
         double maxi=s;
         for(int j=k;j<nums.size();j++){
            
            s-=nums[c++];
            s+=nums[j];
            maxi=max(maxi,s);
         }
         cout<<maxi;
        //  ans=maxi/k;
         return maxi/k;
    }
};