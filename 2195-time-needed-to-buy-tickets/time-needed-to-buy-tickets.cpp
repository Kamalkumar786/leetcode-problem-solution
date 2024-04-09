class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
      queue<int>q;
      int c=0;
      for(int i=0;i<tickets.size();i++){
        q.push(i);
      } 
      while(!q.empty()){
        c++;
        int s=q.front();
        q.pop();
        tickets[s]--;
        if(k==s && tickets[s]==0) return c;
        if(tickets[s]!=0) q.push(s);

      }
      return c; 
    }
};

       