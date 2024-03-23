/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *ans = (int*)malloc((digitsSize + 1) * sizeof(int));

    int sign = (digits[digitsSize-1] +1) /10;
    digits[digitsSize - 1] = (digits[digitsSize-1] +1) %10;
    for (int i = digitsSize-2; i>=0; i--){
        digits[i] += sign;
        sign = digits[i]/10;
        digits[i] = digits[i]%10;
        printf("%d\n", sign);
    }
    // printf("%d", sign);
    if (sign ==0) {
        *returnSize = digitsSize;
        return digits;
        }
    ans[0]= sign;
    for (int i= 0; i<digitsSize; i++){
        ans[i+1] = digits[i];
    }
    *returnSize = digitsSize + 1;
    return ans;
}