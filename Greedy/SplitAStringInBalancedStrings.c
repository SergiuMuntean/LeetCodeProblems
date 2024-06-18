int balancedStringSplit(char* s) {
    int R = 0;
    int L = 0;
    int contor = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(R > 0 && L > 0 && R == L) {
            contor++;
            R--;
            L--;
        }
        if(s[i] == 'L') {
            L++;
        }
        else {
            R++;
        }
    }
    return contor + 1;
}
