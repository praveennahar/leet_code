# 1047. Remove All Adjacent Duplicates In String
# Easy
# 5.4K
# 211
# Companies
# You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

# We repeatedly make duplicate removals on s until we no longer can.

# Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

# Example 1:

# Input: s = "abbaca"
# Output: "ca"
# Explanation: 
# For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
# Example 2:

# Input: s = "azxxzy"
# Output: "ay"
 

# Constraints:

# 1 <= s.length <= 105
# s consists of lowercase English letters.

# class Solution:
#     def removeDuplicates(self, s: str) -> str:
#         idx =0
#         while(idx+1<len(s)):
#             print(s[idx],end=' ')
#             print(len(s))
#             # print(idx)
#             if(s[idx]==s[idx+1]):
#                 s= s[:idx]+s[idx+2:]
#                 if idx > 0:
#                     # print(idx)
#                     idx -= 1
#             else:
#                 # print(idx)
#                 idx += 1
#         return s


# best approach 
class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack=[]
        for i in s:
            print(i)
            if len(stack)>0 and stack[-1]==i:
                # stack.pop()
                print(stack)
            else:
                stack.append(i)
                # print(stack)
        return "".join(stack)

s1 = Solution()

print(s1.removeDuplicates("abbaca"))