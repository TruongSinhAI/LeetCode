class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        if len(s) != len(goal): 
            return False
        if (len(set(s)) != len(set(goal))):
            return False
        if s==goal:
            for i in s:
                if s.count(i) >=2:
                    return True
            return False
        tmp = 0
        for i in range(len(s)):
            if s.count(s[i]) != goal.count(s[i]):
                return False
            if s[i] != goal[i]:
                tmp +=1
            if tmp>2:
                return False
        return True 