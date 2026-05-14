class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        numberstack=[]
        operationstack=[]
        for ch in tokens:
            if ch in '+-*/':
                b=numberstack.pop()
                a=numberstack.pop()

                if ch=="+":
                    sum=a+b
                    numberstack.append(sum)
                elif ch=="-":
                    sub=a-b
                    numberstack.append(sub)
                elif ch == "*":
                    numberstack.append(a * b)
                else:
                    div=a/b
                    numberstack.append(int(div))
            else:
                numberstack.append(int(ch))
        return numberstack[-1]