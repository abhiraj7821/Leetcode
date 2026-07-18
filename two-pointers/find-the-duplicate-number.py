class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        #APPROCH-1
        # nums.sort()
        # for i in range(0,len(nums)):
        #     if(nums[i]==nums[i+1]):
        #         return nums[i]

        # return -1
        #APPRICH-2
        #Array k hr element ko uski location pe pohachado
        visited_array=[False]*len(nums)
        for i in range(0,len(nums)):
            if(visited_array[nums[i]]==True):
                return nums[i]
            visited_array[nums[i]]=True
        return -1