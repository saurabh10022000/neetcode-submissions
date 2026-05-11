class Solution:
    def isPalindrome(self, s: str) -> bool:
        fil=""
        for ch in s:
            if ch.isalnum():
                fil+=ch.lower()
        return fil==fil[::-1]    