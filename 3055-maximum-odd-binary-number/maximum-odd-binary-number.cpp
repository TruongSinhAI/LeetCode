class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        int num0 = 0;
        for (char i: s){
            if (i=='0') num0 ++;
        }
        string ans;
        n --;
        while (n>0){
            if (num0>0){
                ans = '0' + ans;
                num0--;
            }
            else{
                ans = '1' + ans;
            }
            n --;
        } 
        return ans+'1';

    }
};