

int tribonacci(int n){
    int a = 0, b = 1, c=1;
    int tmp;
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