class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j =0, ans = 0;
        int k[300];
        if (s=="") return 0;
        for (int i =0; i<300; i++){
            k[i] = -1;
        }
        int i =0;
        for(int j =0; j<s.length(); j++){
            // if (j == s.length() -1){

            // }
            // cout<<k[s[j]];
            if (k[s[j]] ==-1){
                k[s[j]] = j;
            }
            else{
                // cout<<j<<" "<<i<<" "<<k[s[j]]<<endl;
                if (ans ==0) ans = j-i;
                // ans = max(ans, min(j-i, j-k[s[j]]));
                i = max(i,k[s[j]] +1);
                k[s[j]] = j;
            }
            cout<<j<<" "<<i<<endl;
            ans = max(ans, j-i+1);
        }

        // j = s.length();
        // ans = max(ans, j-i+1);    
        if (s.length() && !ans) return s.length();
        return ans;
    }
};