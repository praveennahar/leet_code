# class Solution(object):
#     def valid (self,ch):
#         if(ch=='a' and ch=='z') or (ch=='A' and ch=='Z') or (ch=='0' and ch=='9'):
#             return True
#         return False
        
    
#     def isPalindrome(self, s):
#         temp = ''
        
#         for i in s:
#             if self.valid(i):
#                 temp += i
#         print(temp)        
#         temp.lower()
            
#         left = 0
#         right =  len(s) -1
#         while left <= right:
#             if s[left] != s[right]:
#                 return False
#             left +=1
#             right -=1
#         return True

# 100% correct answer
class Solution:
    def isPalindrome(self, s: str) -> bool:
        st = ''
        for i in s:
            if i.isalnum():
                st += i.lower()
        if st == st[::-1]:
            return True
         

a = Solution()

i = a.isPalindrome("A man, a plan, a canal: Panama") 
i = a.isPalindrome("race a car") 
i = a.isPalindrome("ABCDE8 8EDCBA")
print(i)