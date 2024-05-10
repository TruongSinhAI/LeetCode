class Solution:
    def kthSmallestPrimeFraction(self, arr: List[int], k: int) -> List[int]:
        tmp = []
        for i in range(len(arr)):
            for j in range(i, len(arr)):
                tmp.append([arr[i]/arr[j], [arr[i], arr[j]]])
        tmp.sort(key = lambda x: x[0])
        return tmp[k-1][1]
