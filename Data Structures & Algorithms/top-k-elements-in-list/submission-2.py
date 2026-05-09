class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp={}
        for n in nums:
            mp[n]=mp.get(n,0)+1
        freq=[]
        for i in range(len(nums)+1):
            freq.append([])
        for v,c in mp.items():
            freq[c].append(v)
        ans=[]
        for i in range(len(freq)-1,0,-1):
            for n in freq[i]:
                ans.append(n)
                if len(ans)==k:
                    return ans
