class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        closeNum=nums[0]

        for i in nums:
            if abs(i)<abs(closeNum):
                closeNum=i

        if closeNum<0 and abs(closeNum) in nums:
            return abs(closeNum)

        return closeNum            
            

            
        