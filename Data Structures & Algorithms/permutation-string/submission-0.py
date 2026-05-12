class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        mp={}
        if len(s1) > len(s2):
            return False

        for i in range(len(s1)):
            mp[s1[i]]=mp.get(s1[i],0)+1
        j=0
        for i in range(len(s2)):
            ch=s2[i]
            if(ch in mp):
                mp[ch]-=1
            if(i-j+1>len(s1)):
                lch=s2[j]
                if(lch in mp):
                    mp[lch]+=1
                j+=1
            if all(v == 0 for v in mp.values()):
                return True
        return False