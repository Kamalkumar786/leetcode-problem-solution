// class Solution1 {
// public:
//     int change(int amount, vector<int>& coins) {
//         int n=coins.size();
//         return fun(0,coins,amount);
//     }
// private:
//     int fun(int i, vector<int>& coins,int amt){
//         if(i==coins.size()){
//             return 0;
//         }
//         if(amt==0)
//         return 1;
//         if(amt<0)
//         return 0;
//         int ans=fun(i+1,coins,amt);
//         if(amt>=coins[i])
//         ans+=fun(i,coins,amt-coins[i]);
//         cout<<ans;
//         return ans;
//     }
// };
class Solution {
    vector<vector<int>>tlb;
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        tlb.resize(n+1, vector<int>(amount+1,INT_MIN));
        return fun(0,coins,amount);
    }
private:
    int fun(int i, vector<int>& coins,int amt){
        if(tlb[i][amt]!=INT_MIN)
        return tlb[i][amt];
        if(i==coins.size()){
            return 0;
        }
        if(amt==0)
        return tlb[i][amt]=1;
        if(amt<0)
        return tlb[i][amt]=0;
        int ans=fun(i+1,coins,amt);
        if(amt>=coins[i])
        ans+=fun(i,coins,amt-coins[i]);
        // cout<<ans;
        return tlb[i][amt]=ans;
    }
};