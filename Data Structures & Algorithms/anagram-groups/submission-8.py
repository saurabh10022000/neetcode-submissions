class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp=defaultdict(list)
        for s in strs:
            count=[0]*26
            for x in s:
                count[ord(x)-ord('a')]+=1
            key=tuple(count)
            mp[key].append(s)
        return list(mp.values())
            
