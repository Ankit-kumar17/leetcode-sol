// Last updated: 7/21/2026, 4:34:41 PM
class Solution {
public:
    string interpret(string command) {
        string ans;

for(int i=0; i<command.size(); i++){
    if(command[i] == 'G' ){
        ans.push_back('G');
    }
     if(command[i] == '(' &&  command[i+1] == ')' ){
        ans.push_back('o');
    }
     if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
        ans += "al";
    }
    
}
return ans;

    }
};