class Solution {
    public String reversePrefix(String word, char ch) {
        String ans = "";
        boolean sign = true;
        for (int i =0; i<word.length(); i ++){
            if (sign == true){
                ans = word.charAt(i) + ans;
            }
            else {
                ans += word.charAt(i);
            }
            if (word.charAt(i) == ch){
                sign = false;
            }
        }
        if (sign == true){
            return word;
        }
        return ans;
    }
}