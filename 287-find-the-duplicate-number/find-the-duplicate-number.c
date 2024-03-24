int findDuplicate(int* nums, int numsSize) {
    int *ans = (int*) malloc(numsSize*sizeof(int*));
    for (int i =0 ; i<numsSize; i++) {
        ans[nums[i]] = 0;
    }
    for (int i = 0; i<numsSize; i++){
        if (ans[nums[i]]!= 0) return nums[i];
        else ans[nums[i]] = 1;
    }
    return 0;
}