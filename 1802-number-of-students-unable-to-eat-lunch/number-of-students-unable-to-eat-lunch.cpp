class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        stack<int>s;
        queue<int>q;
        for(int i=0;i<n;i++){
            s.push(sandwiches[n-i-1]);
            q.push(students[i]);
        }
        int i=0;
        while(!q.empty()&&i<q.size()){
            if(q.front()==s.top()){
                s.pop();
                q.pop();
                i=0;
            }
            else{
               q.push(q.front());
               q.pop();
               i++; 
            }
        }
       return q.size();

    }
};