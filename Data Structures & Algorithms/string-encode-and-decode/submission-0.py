class Solution:

    def encode(self, strs: List[str]) -> str:
        ans=""
        for s in strs:
            a=str(len(s))
            ans+=a
            ans+="#"
            ans+=s
        return ans
    def decode(self, s: str) -> List[str]:
        ans2=[]
        i=0
        while(i<len(s)):
            j=i
            while(s[j]!='#'):
                j=j+1
            length=int(s[i:j])
            j=j+1
            stt=s[j:j+length]
            ans2.append(stt)
            i=j+length
        return ans2