class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        return [i for i in set((s1 + ' ' +s2).split(' ')) if s1.split(' ').count(i) + s2.split(' ').count(i)==1]