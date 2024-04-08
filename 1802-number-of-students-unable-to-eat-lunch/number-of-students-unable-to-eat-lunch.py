class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        c = [0, 0]
        for s in students:
            c[s] += 1

        r = len(sandwiches)
        for s in sandwiches:
            if c[s] ==0:
                break
            if r == 0:
                break
            c[s] -=1
            r -=1
        return r
                