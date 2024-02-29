class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int>v;
         v.push_back(1);
        for(int c=1;c<=rowIndex;c++){
            v.push_back(fun(rowIndex,c));
        }
        return v;
    }
private:
    int fun(int r,int c){
        long long re=1;
        for(int i=0;i<c;i++){
            re=re*(r-i);
            re=re/(i+1);
        }
        return re;

    }
};