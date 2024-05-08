class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        new = []
        for i in range(len(score)):
            new.append([score[i], i])
        new.sort(key = lambda x: -x[0])
        for i in range(len(new)):
            if i>2:
                tmp = str(i+1)
            elif i==0:
                tmp = "Gold Medal"
            elif i==1:
                tmp = "Silver Medal"
            elif i==2:
                tmp = "Bronze Medal"
            new[i][0] = tmp

        new.sort(key = lambda x: x[1])

        return [x[0] for x in new]