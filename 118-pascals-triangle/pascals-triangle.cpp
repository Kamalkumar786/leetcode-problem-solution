class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<int>a;
        a.push_back(1);
        v.push_back(a);
        if(numRows==1)return v;
        a.push_back(1);
        v.push_back(a);
        for(int i=2;i<numRows;i++){
              vector<int>t;
              t.push_back(1);
              for(int j=1;j<v[i-1].size();j++){
                  int k=v[i-1][j]+v[i-1][j-1];
                  t.push_back(k);  
              }
              t.push_back(1);
              v.push_back(t);
              t.clear();
        }
        return v;
    }
};