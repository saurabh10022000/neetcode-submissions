class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n=len(temperatures)
        result = [0] * n
        stack=[]
        for i in range(n):
            while(stack and temperatures[i]>temperatures[stack[-1]]):
                p_ind=stack.pop()
                result[p_ind]=i-p_ind;
            stack.append(i)
        return result