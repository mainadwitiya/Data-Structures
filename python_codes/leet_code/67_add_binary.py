'''
Given two binary strings a and b, return their sum as a binary string.
Input: a = "11", b = "1"
Output: "100"

'''


class Solution:
    def addBinary(self, a: str, b: str) -> str:
        sum = bin(int(a, 2) + int(b, 2))
        answer=sum[2:]
        return answer
        

