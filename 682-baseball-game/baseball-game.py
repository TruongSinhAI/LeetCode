class Solution:
    def calPoints(self, operations: List[str]) -> int:
        st = []
        for i in operations:
            # if i.isdigit():
                
            if i == 'C':
                st.pop()
            elif i =='D':
                st.append(st[-1]*2)
            elif i =='+':
                st.append(st[-1] + st[-2])
            else:
                st.append(int(i))
            # print(st)
        return sum(st)