import java.util.Arrays;
import java.util.Collections;

class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        // Arrays.sort(happiness, Collections.reverseOrder());
        Arrays.sort(happiness);  // Sort in ascending order 
        int i = happiness.length-1;
        long ans = 0;
        int c = 0;
        while (k>0){
            ans += Math.max(happiness[i] - c, 0);
            if (happiness[i] - c == 0) return ans;
            i --;
            c ++;
            k --;
        }
        return ans;
    }
}