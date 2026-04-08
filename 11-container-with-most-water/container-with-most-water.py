class Solution:
    def maxArea(self, nums: List[int]) -> int:
        n=len(nums)
        l=0
        r=n-1
        max_water=0
        while l<=r:
            max_water=max(max_water,(min(nums[l],nums[r])*(r-l)))
            if(nums[l]<=nums[r]):
                l+=1
            else:
                r-=1
        return max_water       
        