class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        if len(people) == 2:
            return 1 if people[0] + people[1] <=limit else 2
        people.sort()
        last, first = len(people)-1, 0
        sum = 0
        while first<=last:
            if limit - people[last] == 0:
                last -= 1
                sum +=1
            elif limit - people[last]< people[first]:
                last -=1
                sum +=1
            else:
                last -=1
                first +=1
                sum +=1
        return sum