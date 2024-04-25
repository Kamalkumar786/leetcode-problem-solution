class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> fre;
        for(int i=0;i<trips.size();i++){
            int j;
            for(j=trips[i][1];j<trips[i][2];j++){
                fre[j]+=trips[i][0];
                if(fre[j]>capacity)return 0;
            }
        }
        return 1;
     }
};