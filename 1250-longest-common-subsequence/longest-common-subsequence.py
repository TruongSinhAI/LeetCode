class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        x = [[0 for _ in range(len(text2)+1)] for _ in range(len(text1)+1)]
        for i in range(len(text1)+1):
            for j in range(len(text2)+1):
                if i ==0 or j == 0:
                    x[i][j] = 0
                elif text1[i-1] == text2[j-1]:
                    x[i][j] = x[i-1][j-1] + 1
                else:
                    x[i][j] = max(x[i-1][j], x[i][j-1])
        return x[len(text1)][len(text2)]

            