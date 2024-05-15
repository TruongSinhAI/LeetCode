class Solution:
    def distanceTraveled(self, mainTank: int, additionalTank: int) -> int:
        ans = 0
        while (additionalTank > 0 and mainTank>4):
            ans += mainTank//5 * 5
            additionalTank -= mainTank//5
            mainTank = mainTank%5 + mainTank//5
        print(mainTank, additionalTank, ans)
        if additionalTank <0:
            mainTank += additionalTank
        
        return (ans + mainTank) *10

