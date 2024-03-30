class Solution {
    private:
    int fun(vector<int>& nums, int k){
          map<int,int>m;
        int c=0,j=0;
        for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
                while(m.size()>k){
                    m[nums[j]]--;
                    if(m[nums[j]]==0)m.erase(nums[j]);
                    j++;
                }
                 c+=(i-j+1);
            }
    return c;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return fun(nums,k)-fun(nums,k-1);
    }
};