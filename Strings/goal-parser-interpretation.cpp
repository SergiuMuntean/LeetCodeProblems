class Solution {
public:
    string interpret(string command) {
        for(int i{0}; i < command.length() - 1; i++) {
            if(command[i] == '(' && command[i + 1] == ')') {
                command.replace(i, 2, "o");
            } else {
                if(command[i] == 'G') {
                    continue;
                } else {
                    command.replace(i, 4, "al");
                    i++;
                }
            }
        }
        return command;
    }
};
