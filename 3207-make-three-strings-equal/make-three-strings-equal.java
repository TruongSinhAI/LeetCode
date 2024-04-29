class Solution {
    public int findMinimumOperations(String s1, String s2, String s3) {
        int tmp = s1.length();
        if (tmp > s2.length()){
            tmp = s2.length();
        }
        if (tmp >s3.length()){
            tmp = s3.length();
        }
        int count = 0;
        for (int i =0; i<tmp; i++) {
            if (s1.charAt(i) == s2.charAt(i) && s2.charAt(i) == s3.charAt(i)){
                count += 1;
            }
            else if (count ==0) {
                return -1;
            }
            else {
                break;
            }
        }
        return s1.length() + s2.length() + s3.length() - 3*count;
    }
}