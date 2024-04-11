class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k)return "0";
        stack<char>s;
        s.push(num[0]);
        for(int i=1;i<num.size();i++){
            while(!s.empty()&&s.top()>num[i]&&k>0){
                s.pop();
                k--;
            }
            if(s.empty()&&num[i]=='0')continue;
            s.push(num[i]);
        }
        while(!s.empty()&&k>0){
            s.pop();
            k--;
        }
        if(s.empty()) return "0";
        string st="";
        while(!s.empty()){
            st+=s.top();
            s.pop();
        }
        reverse(st.begin(),st.end());
        return st;
    }
};