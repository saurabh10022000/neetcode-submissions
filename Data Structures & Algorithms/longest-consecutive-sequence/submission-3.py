class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numset=set(nums)
        ans=0;
        for n in numset:
            if n-1 not in numset:
                l=1
                while n+l in numset:
                    l=l+1
                ans=max(ans,l)
        return ans