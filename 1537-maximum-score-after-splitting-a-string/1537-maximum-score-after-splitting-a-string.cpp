class Solution {
public:
    int maxScore(string s) {
        int maxi=INT_MIN;
        int ans=0;
        string r,r1;
        for(int i=1;i<s.size();i++){
        r= s.substr(0,i);
        r1=s.substr(i);
        // cout<<r<<" "<<r1<<endl;
        int c1=count(r.begin(), r.end(), '0');
        int c2=count(r1.begin(), r1.end(), '1');
        cout<<r<<" "<<r1<<" "<<c1<<c2<<endl;
        int c=c1+c2;
        maxi=max(maxi,c);
        // ans=c;
    }
   
    return maxi;
    }

};