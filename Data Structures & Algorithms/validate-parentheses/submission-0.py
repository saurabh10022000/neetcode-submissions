class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for q in s:

            if q in "([{":
                stack.append(q)

            else:
                if not stack:
                    return False

                if (
                    (stack[-1] == "{" and q == "}") or
                    (stack[-1] == "[" and q == "]") or
                    (stack[-1] == "(" and q == ")")
                ):
                    stack.pop()

                else:
                    return False

        return len(stack) == 0