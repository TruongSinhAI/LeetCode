/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
    int x =-1;
    long left = 0;
    while (left<n){
        long k = (left + n);
        x = guess(k/2);
        // printf("%d %d %d\n",x,left,n);
        if (x==1){
            left = k/2+1;
        }
        else if (x==-1){
            n =  k/2 - 1;
        }
        else{
            return k/2;
        }
    }
    return (left+n)/2;
}