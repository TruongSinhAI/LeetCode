class Solution {
    public String replaceDigits(String s) {
        String ans = "";
        for (int i=0; i<s.length(); i++){
            if (s.charAt(i)>='a' && s.charAt(i)<='z'){
                ans += s.charAt(i);
            }
            else {
                ans += (char) (ans.charAt(ans.length()-1) + ((int) s.charAt(i) - 48));
            }
        }
        return ans;
    }
}