class Solution:
    def isHappy(self, n: int) -> bool:
        a = [i*i for i in range(10)]
        x = []
        while n not in x:
            ans = 0
            x.append(n)
            while n>0:
                tmp = n%10
                n = n//10
                print(tmp)
                ans += a[tmp]
            n = ans
            if ans == 1:
                return True
        return False