class Solution:
    def hammingWeight(self, n: int) -> int:
        i = 0
        if n==1:
            return 1
        if n<1:
            return 0
        while 2**i <n:
            i+= 1
        tmp = [0] *i
        i -= 1
        ans =0
        while i>=0 and n>0:
            if 2**i <=n:
                print(i)
                n -= 2**i
                if tmp[i] ==0:
                    ans += 1
                    tmp[i]=1
            else:
                i-=1
        return ans