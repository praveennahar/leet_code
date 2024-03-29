'''342. Power of Four
Easy
2.8K
328
Companies
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

 

Example 1:

Input: n = 16
Output: true
Example 2:

Input: n = 5
Output: false
Example 3:

Input: n = 1
Output: true

Constraints:

-231 <= n <= 231 - 1'''

class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n <= 0:
            return False
        if n == 1:
            return True
        if n % 4 == 0:
            return self.isPowerOfFour(n//4)
        else:
            return False


a = [2,3,2,9,7,8,5,3,7,10]

a.sort()

