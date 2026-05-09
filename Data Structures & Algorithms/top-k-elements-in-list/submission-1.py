class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp={}
        ans=[]
        for x in nums:
            mp[x]=mp.get(x,0)+1
        pq = []
        ans=[]
        for v,f in mp.items():
            heapq.heappush(pq, (-f, v))
        while k>0:
            f,v=heapq.heappop(pq)
            ans.append(v)
            k-=1
        return ans