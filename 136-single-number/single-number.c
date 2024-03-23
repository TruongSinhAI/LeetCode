int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int singleNumber(int* nums, int numsSize) {
    // qsort(nums, nums+numsSize);
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    int s = 1;
    for (int i =1; i<numsSize; i++){
        if (nums[i]!= nums[i-1]){
            if (s>1){
                s = 1;
            }
            else return nums[i-1];
        }
        else s++;
    }
    return nums[numsSize-1];
}