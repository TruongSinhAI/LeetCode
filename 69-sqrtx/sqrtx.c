int mySqrt(int x) {
    long i = 0;
    while (i*i<x){
        i++;
    }
    if (i*i == x) return i;
    return i-1;
}