class Solution {
    public int compareVersion(String version1, String version2) {
        String[] v1 = version1.split("\\.");  
        String[] v2 = version2.split("\\.");

        int length = Math.min(v1.length, v2.length);  
        
        for (int i = 0; i < length; i++) {
            int num1 = Integer.parseInt(v1[i]);  
            int num2 = Integer.parseInt(v2[i]);
            if (num1 < num2) {
                return -1;
            } else if (num1 > num2) {
                return 1;
            }
        }

        if (v1.length > v2.length) {
            for (int i = length; i < v1.length; i++) {
                if (Integer.parseInt(v1[i]) > 0) {
                    return 1;
                }
            }
        } else if (v1.length < v2.length) {
            for (int i = length; i < v2.length; i++) {
                if (Integer.parseInt(v2[i]) > 0) {
                    return -1;
                }
            }
        }

        return 0;
    }
}