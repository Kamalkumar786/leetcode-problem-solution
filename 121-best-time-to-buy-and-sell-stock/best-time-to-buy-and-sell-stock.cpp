class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int i = 0, j = 1;
        while (j < prices.size()) {
            if (prices[i] > prices[j]) {
                i = j;
            } else {
                maxi = max(maxi, prices[j] - prices[i]);
            }
            j++;
        }
        return maxi;
    }
};
