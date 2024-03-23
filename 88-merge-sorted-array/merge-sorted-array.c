void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i =0, j =0;
    int *ans = (int*)malloc((m+n)*sizeof(int*));
    while(i<m && j < n){
        if (nums1[i] <nums2[j]){
            ans[i+j] = nums1[i];
            i++;
        }
        else{
            ans[i+j] = nums2[j];
            j++;
        }
    }

    while (i<m){
        ans[i+j] = nums1[i];
        i++;
    }


    while (j<n){
        ans[i+j] = nums2[j];
        j++;
    }

    for (int p = 0; p < m + n; p++) {
        nums1[p] = ans[p];
    }
    free(ans);
}