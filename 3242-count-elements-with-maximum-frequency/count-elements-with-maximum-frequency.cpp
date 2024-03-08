class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
      unordered_map<int,int>m;
      for(int i=0;i<nums.size();i++){
          m[nums[i]]++;
      }
      int maxi=INT_MIN;
      for (auto [nums, f] :m) {
            maxi = max(maxi,f);
        }
     int ans=0;
        for (auto [nums, f] : m) {
            if (f == maxi) {
                ans++;
            }
        }
        return ans*maxi;
    }
};