class Solution {
public:
    int digitSquareSum(int n){
        int s=0;
        while(n!=0){
            int r=n%10;
            s+=pow(r,2);
            n=n/10;
        }
        return s;
    }
    bool isHappy(int n) {
        do{
        if(n==1)
            return 1;
        else
        cout<< n<<" ";
           n= digitSquareSum(n);
           
           }while(n>6);
    if(n==1)
    return 1;
    return 0;    
    }
    
};