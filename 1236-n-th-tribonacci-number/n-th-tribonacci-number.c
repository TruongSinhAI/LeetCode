

int tribonacci(int n){
    long a = 0, b = 1, c=1;
    long tmp;
    for(int i =3; i<=n; i++){
        tmp = a + b +c;
        a = b;
        b = c;
        c = tmp;
    }
    if (n==0){
        return 0;
    }
    return c;
}