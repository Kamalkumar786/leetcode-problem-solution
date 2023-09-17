class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int j=0,z=0;
       int maxi=0;
       if(k==0){
           for(int i=0;i<nums.size();i++){
               if(nums[i]==1)
               {
                   z+=1;
                    maxi=max(maxi,z);
                }

               else{
                  
                   z=0;
               }
           }
        //    if(nums[nums.size()-1]==1)
        //    maxi+=1;
           return maxi;
       }
       unordered_set<int>s;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==0 && z==k){
               while(j<i && z==k){
                //    s.erase(nums[j]);
                   if(nums[j]==0){
                   z--;
                   }
                   j++;
               }
           }
        //    s.insert(nums[i]);
               if(nums[i]==0&&k!=0){
               z++;}
               maxi=max(maxi,i-j+1);
               cout<<maxi;
                }                                                                                                             
       return maxi;
    }
};