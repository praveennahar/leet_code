# 344. Reverse String
# Easy
# 6.8K
# 1K
# Companies
# Write a function that reverses a string. The input string is given as an array of characters s.

# You must do this by modifying the input array in-place with O(1) extra memory.

 

# Example 1:

# Input: s = ["h","e","l","l","o"]
# Output: ["o","l","l","e","h"]
# Example 2:

# Input: s = ["H","a","n","n","a","h"]
# Output: ["h","a","n","n","a","H"]
 

# Constraints:

# 1 <= s.length <= 105
# s[i] is a printable ascii character.


class Solution:
    def reverseString(self, s):
        """
        Do not return anything, modify s in-place instead.
        """
        s[:] = s[::-1]
        return s


s = Solution()

print(s.reverseString(['h','e','l','l','o']))