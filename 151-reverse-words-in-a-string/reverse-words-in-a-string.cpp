class Solution {
public:
    string reverseWords(string s) {
       stack<string>st;
       s+=" ";
       string temp="";
       for(int i=0;i<s.size();i++){
        if(s[i]==' '){
           if(temp!=""){
            st.push(temp);
           }
           temp="";
        }
        else
            temp+=s[i];

       }
       
       string ans="";
       while(st.size()!=1){
            ans+=st.top()+" ";
            st.pop();
       }
        ans+=st.top();
        return ans;
    }
};