class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 1, j = 1;
        int c = 1;

        while (i<n) {
            if (nums[i] == nums[i-1]) {
                if (c < 2) {
                    c++; 
                    nums[j++] = nums[i];
                }
            }
            else {
                c = 1;
                nums[j++] = nums[i];
            }

            i++;
        }

        return j;
    }
};