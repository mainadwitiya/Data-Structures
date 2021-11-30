'''
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3

Input: nums = [2,2,1,1,1,2,2]
Output: 2


'''
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        dicti={}
        count=0
        item=''
        for i in reversed(nums):
            dicti[i]=dicti.get(i,0)+1
            if dicti[i]>=count:
                count=dicti[i]
                item =i
        return item
            
        
        
