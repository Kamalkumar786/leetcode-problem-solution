class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>mpp;
        for(int i=0;i<stones.size();i++){
            mpp[stones[i]]++;
        }
        int s=0;
        for(auto it:mpp){
            for(int j=0;j<jewels.size();j++){
                if(it.first==jewels[j]){
                    s+=it.second;
                }
            }
        }
        return s;
    }
};