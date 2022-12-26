'''Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false'''

class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        for i in range(31):
            ans = pow(2,i) #pow function is also present in c++ and use same as python

            if ans == n:    #it will check if after every iteration if number is equal of a power of two then it will return true
                 return True # True in c++ is small true and false also 
        
        return False #after end of loop if number is not equal to power of two than it'll return false it cann't be put inside the loop 
