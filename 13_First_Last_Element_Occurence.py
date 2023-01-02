# 34. Find First and Last Position of Element in Sorted Array
# Medium
# 15.2K
# 364
# Companies
# Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

# If target is not found in the array, return [-1, -1].

# You must write an algorithm with O(log n) runtime complexity.

 

# Example 1:

# Input: nums = [5,7,7,8,8,10], target = 8
# Output: [3,4]
# Example 2:

# Input: nums = [5,7,7,8,8,10], target = 6
# Output: [-1,-1]
# Example 3:

# Input: nums = [], target = 0
# Output: [-1,-1]
 

# Constraints:

# 0 <= nums.length <= 105
# -109 <= nums[i] <= 109
# nums is a non-decreasing array.
# -109 <= target <= 109


class Solution(object):
    def firstOcc(self,nums,n,target):
        s=0
        e=n-1
        ans=-1
        #For checking the leftmost index
        while s<=e:
            mid =s + (e-s)//2
            if nums[mid]==target:
                ans = mid
                e = mid-1
            elif nums[mid]>target:
                e = mid-1
            else:
                s = mid +1
        #For checking the rightmost index
        return ans

    def lastOcc(self,nums,n,target):
        s=0
        e=n-1
        ans=-1
        #For checking the leftmost index
        while s<=e:
            mid =s + (e-s)//2
            if nums[mid]==target:
                ans = mid
                s = mid+1
            elif nums[mid]>target:
                e = mid-1
            else:
                s = mid +1
        #For checking the rightmost index
        return ans

    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n=len(nums)
        if n==0:
            return [-1,-1]
        
        a = self.firstOcc(nums,n,target)
        b = self.lastOcc(nums,n,target)

        return [a,b]





