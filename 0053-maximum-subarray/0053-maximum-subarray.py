class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        prf = 0
        large = min(nums)
        for i in nums:
            prf = prf + i
            large = max(large, prf)
            if prf < 0:
                prf = 0
        
        return large
  

    
    
