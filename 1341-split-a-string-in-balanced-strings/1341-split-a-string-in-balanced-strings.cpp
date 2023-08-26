class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0, r = 0, count = 0;
    for(char i : s){
    if(i == 'R'){
    r++;
    }else{
    l++;
    }if(l==r){
        count++;
    l=r=0;
    }
        }
    return count;
    }
};