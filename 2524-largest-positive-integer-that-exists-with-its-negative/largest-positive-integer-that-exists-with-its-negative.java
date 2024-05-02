class Solution {
    public int findMaxK(int[] nums) {
        Arrays.sort(nums);
        int left =0;
        int tmp =0;
        int right = nums.length-1;
        while (left<right){
            tmp = nums[left] + nums[right];
            if (tmp>0){
                right --;
            }
            else if (tmp <0){
                left ++;
            }
            else {
                return nums[right];
            }
        }
        return -1;
    }
}