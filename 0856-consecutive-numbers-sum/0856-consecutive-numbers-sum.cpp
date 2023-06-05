class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int c=0;
        for(int k=1;2*n-k*(k-1)>0;k++){
            int num=n-(k*(k-1))/2;
            int den=k;
            if(num%den==0)
             c++;
             
        }
        return c;
    }
};