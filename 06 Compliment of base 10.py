'''// 1009. Complement of Base 10 Integer
// Easy
// 1.8K
// 87
// Companies
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

 

// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:

// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
 

// Constraints:

// 0 <= n < 109'''
class Solution(object):
    def bitwiseComplement(self, n):
        """
        :type n: int
        :rtype: int
        """
        m = n   #make a temporary variable
        mask =0  # create a mask variable with 0

        if m==0:
            return 1

        while(m!=0):            #It will run until our bits is not zero
            mask = (mask<<1) | 1    #32 bits ko pehle left shift karenge then or operator se last me add karte jayege
            m = m>>1            #number ko right shift karke zero bana denge
        #Now this is the main formula
        ans = (~n) & mask       #firstly me fine a numbers compliment then add mask variable by & operator
        return ans    #finally it's gives a answer

a=Solution()
print(a.bitwiseComplement(5))