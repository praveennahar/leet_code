# class Solution(object):
#     def reverse(self, x):
#         """
#         :type x: int
#         :rtype: int
#         """
#         temp = x
#         ans = 0
#         a = 0
#         while(temp != 0):
#             a = temp%10
#             ans = a + ans * 10
#             temp = temp//10
#         return ans
#############################################
# this is others logic
class Solution:
def reverse(self, x: int) -> int:
    if x<0:
        k=-1;x=k*x;s=0
        while x!=0:
            s=s*10+x%10
            x//=10
        s*=-1
    else:
        s=0
        while x!=0:
            s=s*10+x%10
            x//=10
    if not(2**31*(-1)<s<2**31-1):
        return 0
    return s


a = Solution()
n = int(input("Enter "))
print(a.reverse(n))