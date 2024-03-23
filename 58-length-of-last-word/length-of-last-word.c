int lengthOfLastWord(char* s) {
    int x=0,y=0;
    for (int i =0; i<strlen(s); i++){
        if (s[i] == ' '){
            if (x>0) y = x;
            x = 0;
        }
        else {
            x ++;
        }
    }
    if (x==0) return y;
    return x;
}