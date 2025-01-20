class Solution {
public:
    int reverse(int x) {
      long long a=0;
      while(x!=0){
        int t=x%10;
        a=a*10+t;
        x=x/10;
        if(a>INT_MAX||a<INT_MIN)return 0;
      }
      return a;
    }
};