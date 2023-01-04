# 33. Search in Rotated Sorted Array
# Medium
# 19.2K
# 1.2K
# Companies
# There is an integer array nums sorted in ascending order (with distinct values).

# Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

# Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

# You must write an algorithm with O(log n) runtime complexity.

 

# Example 1:

# Input: nums = [4,5,6,7,0,1,2], target = 0
# Output: 4
# Example 2:

# Input: nums = [4,5,6,7,0,1,2], target = 3
# Output: -1
# Example 3:

# Input: nums = [1], target = 0
# Output: -1
 

# Constraints:

# 1 <= nums.length <= 5000
# -104 <= nums[i] <= 104
# All values of nums are unique.
# nums is an ascending array that is possibly rotated.
# # -104 <= target <= 104

class Solution(object):
    def getPivot(self,arr,n):
        s = 0
        e = n-1

        while(s < e):
            mid = s+(e-s)//2
            if(arr[mid] >= arr[0]): #this is the change condition it will check from first element
                s = mid + 1
            else:
                e = mid
        return s
    
    def binarySearch(self,nums,start,end,target):
        s = start
        e = end
        mid = s + (e-s)/2

        while(s <= e):
            if(target == nums[mid]):
                return mid
            
            # means right side
            elif(target > nums[mid]):
                s = mid + 1
            
            else:
                e = mid - 1
            
            mid = s + (e-s)/2  
        
        return -1
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        n = len(nums)
        pivot = self.getPivot(nums,n)

        if(target >= nums[pivot] and target <= nums[n-1]):
            return self.binarySearch(nums,pivot,n-1,target)
        else:    
            return self.binarySearch(nums,0,pivot-1,target)