class Solution:
    def isPalindrome(self, x: int) -> bool:
        z=str(x)
        a=z[::-1]
        if a==z:
            return True
        else:
            return False