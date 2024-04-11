class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        n=len(num)
        if n==k: return "0"
        if n-1==k: return min(num)
        st=[]
        for c in num:
            while st and c<st[-1] and k>0:
                k-=1
                st.pop()
            st.append(c)
        while k>0:
            st.pop()
            k-=1
        for i in range(len(st)):
            if st[i]!="0":
                return ''.join(st[i:])
            elif i ==len(st)-1:
                return '0'

        