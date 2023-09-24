class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        //xcomplement is sum of all elements minus x
        //we are going to find the longest subarray that adds up to xcomplement
        //minOperations = n - the longest subarray
        int xcomplement = -x;
        for(int num : nums) {
            xcomplement += num;
        }
        
        if(xcomplement < 0) {
            return -1;
        } else if(xcomplement == 0) {
            return n;
        }
        
        int i1 = 0, i2 = 0;
        int sum = 0;
        int maxWin = 0;
        while(i2 < n) {
            sum += nums[i2++]; //window expands on the right side always
            while(sum > xcomplement) { //shrink the window on the left side to reduce the sum
                sum -= nums[i1];
                i1++;
            }
            if(sum == xcomplement) {
                maxWin = max(maxWin, i2 - i1);
            }
        }
        return (maxWin == 0) ? -1 : n - maxWin;
    }
};