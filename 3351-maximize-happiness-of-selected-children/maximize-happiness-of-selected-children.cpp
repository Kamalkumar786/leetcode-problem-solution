class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long s = 0;
        int c = 0;
        for(int i = 0; i < k; i++) {
            s += max(happiness[i] - c, 0);  
            c++; 
        }
        return s;
    }
};