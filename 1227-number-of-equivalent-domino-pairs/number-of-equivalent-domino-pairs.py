class Solution:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        d = dict()
        for a, b in dominoes:
            pair = (b, a) if a>b else (a,b)

            d[pair] = d.get(pair, 0) + 1
        ans = 0
        for i in d.values():
            # print(i[1])
            ans += (i*(i-1))//2
        return ans 