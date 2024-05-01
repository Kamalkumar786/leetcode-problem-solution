class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
         int maxi = 0;
        for (int i : candies) {
            maxi = max(maxi,i);
        }
        vector<bool>v;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+e>=maxi)v.push_back(1);
            else
            v.push_back(0);
        }
        return v;    }
};