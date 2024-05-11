class Solution {
    public boolean check(int x){
        int tmp = x;
        while (x>0){
            if ((x%10 ==0)){
                return false;
            }
            if (tmp % (x%10) != 0){
                return false;
            }
            x= x/10;
        }
        return true;
    }
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> ans = new ArrayList<Integer>();
        for (int i =left; i<= right; i++){
            if (check(i)){
                ans.add(i);
            }

        }
        return ans;
    }
}