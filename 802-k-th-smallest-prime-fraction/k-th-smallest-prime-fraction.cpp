#include <vector>
#include <utility> // for pair
#include <algorithm> // for sort

class Solution {
public:
    std::vector<int> kthSmallestPrimeFraction(std::vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<double,pair<int, int>>>v;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                double fraction = static_cast<double>(nums[i]) / nums[j];
                v.push_back({fraction, {i, j}});
            }
        }
       sort(v.begin(), v.end());
        return {nums[v[k - 1].second.first], nums[v[k - 1].second.second]};
    }
};
