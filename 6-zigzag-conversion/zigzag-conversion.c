char* convert(char* s, int numRows) {
    if (numRows <= 1)
        return s;
    char* ans = (char*)malloc((strlen(s) + 1) * sizeof(char));
    int count = 0;
    int k = 0, sign = 0;
    for (int i =0; i<numRows; i++){
        k = 0;
        sign = 0;
        for (int x=0; x< strlen(s); x++){
            if (k==i){
                ans[count] = s[x];
                count++;
            }
            if (sign==0 && k==numRows-1){
                sign = 1;
            }
            else if (sign ==1 && k == 0){
                sign = 0;
            }
            if (sign == 0){
                k ++;
            }
            else if (sign ==1){
                k--;
            }
        }
    }
    ans[count] = '\0';
    // printf("%c %d", ans, strlen(ans));
    // printf("%c", ans);
    return ans;
}