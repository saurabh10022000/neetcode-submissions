class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mini=float('inf')
        maxi=0
        for p in prices:
            mini=min(mini,p)
            profit=p-mini
            maxi=max(maxi,profit)
        return maxi