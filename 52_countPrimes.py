# 204. Count Primes
# Medium
# 6.4K
# 1.2K
# Companies
# Given an integer n, return the number of prime numbers that are strictly less than n.

 

# Example 1:

# Input: n = 10
# Output: 4
# Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
# Example 2:

# Input: n = 0
# Output: 0
# Example 3:

# Input: n = 1
# Output: 0
 

# Constraints:

# 0 <= n <= 5 * 106



class Solution:
    def countPrimes(self, n: int) -> int:
        if n<=2:
            return 0

        prime = [True]*n
        prime[0] = prime[1] = False
        cnt = 0
        # j=2

        for i in range(2,n):
            if prime[i]:
                cnt+=1
                for j in range(2*i,n,i):
                    prime[j] = 0

        return cnt

        