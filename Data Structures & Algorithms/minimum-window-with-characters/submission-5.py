class Solution:
    def minWindow(self, s: str, t: str) -> str:
        mp={}
        for i in range(len(t)):
            mp[t[i]]=mp.get(t[i],0)+1
        j=0
        count=0
        min_len = float('inf')
        nedded=len(mp)
        ans=""
        for i in range(len(s)):
            ch=s[i]
            if ch in mp:
                mp[ch]-=1
                if(mp[ch]==0):
                    count+=1
            while count == nedded:

                if i - j + 1 < min_len:
                    min_len = i - j + 1
                    ans = s[j:i + 1]

                left = s[j]

                if left in mp:
                    if mp[left] == 0:
                        count -= 1

                    mp[left] += 1

                j += 1

        return ans