# 2451. Odd String Difference
# Easy
# 254
# 79
# Companies
# You are given an array of equal-length strings words. Assume that the length of each string is n.

# Each string words[i] can be converted into a difference integer array difference[i] of length n - 1 where difference[i][j] = words[i][j+1] - words[i][j] where 0 <= j <= n - 2. Note that the difference between two letters is the difference between their positions in the alphabet i.e. the position of 'a' is 0, 'b' is 1, and 'z' is 25.

# For example, for the string "acb", the difference integer array is [2 - 0, 1 - 2] = [2, -1].
# All the strings in words have the same difference integer array, except one. You should find that string.

# Return the string in words that has different difference integer array.

 

# Example 1:

# Input: words = ["adc","wzy","abc"]
# Output: "abc"
# Explanation: 
# - The difference integer array of "adc" is [3 - 0, 2 - 3] = [3, -1].
# - The difference integer array of "wzy" is [25 - 22, 24 - 25]= [3, -1].
# - The difference integer array of "abc" is [1 - 0, 2 - 1] = [1, 1]. 
# The odd array out is [1, 1], so we return the corresponding string, "abc".
# Example 2:

# Input: words = ["aaa","bob","ccc","ddd"]
# Output: "bob"
# Explanation: All the integer arrays are [0, 0] except for "bob", which corresponds to [13, -13].
 

# Constraints:

# 3 <= words.length <= 100
# n == words[i].length
# 2 <= n <= 20
# words[i] consists of lowercase English letters.

class Solution:
    def oddString(self, words):
        """
                        abd
        diff array [val b - val a | val d - val b] this is the formula we need to apply for solving 
                   [1,              2]
        """
        def prepareDiffArray(word):
            diffArray = ""
            for idx in range(1,len(word)):
                currDiff = ord(word[idx]) - ord(word[idx - 1]) # for ascii value we get difference
                diffArray += str(currDiff) 
                diffArray += ','
            # print(diffArray) #here the output is a string sperate by coma (3,-1,) one coma extra
            return diffArray
        

        ht = {} #we create a dictionary
        for word in words: 
            diffArray = prepareDiffArray(word)  #storing a difference value of a string one by one
            # print('word   ',word,diffArray) 
            if diffArray not in ht:  # if difference value is not in our dictionary so create a empty list as a value of a dictionary
                ht[diffArray] = []
            ht[diffArray].append(word) # append a value as a string 
            # print(ht[diffArray].append('h')) 
        # print(ht)
        for key,val in ht.items():
            # print(len(val))
            if len(val) == 1: #the odd string occur only single time so we simply check which value is one and we return that value
                # print(val[0])
                return val[0] #our value is in list form so we need to return by index so we get only string
        return ""

a = Solution()
print(a.oddString(["adc","wzy","abc"]))
