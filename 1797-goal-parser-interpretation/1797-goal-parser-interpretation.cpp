class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
                s+='G';
            }
            else if(command[i]=='(' && command[i+1]==')' && i+1<command.size()){
               s+='o';
               i++;
            }
            else if(command[i] == '(' && command[i + 1] == 'a' && i+3 < command.size()){
                s+="al";
                i+=3;
            }
        }
        return s;
    }
};