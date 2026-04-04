class Solution:
    def minAbsoluteDifference(self, nums: list[int]) -> int:
        last1=-1
        last2=-1
        n=len(nums)
        mini=float('inf')
        for i in range(n):
            if(nums[i]==1):
                last1=i
                if(last2!=-1):
                    mini=min(mini,abs(last1-last2))
            elif(nums[i]==2):
                last2=i
                if(last1!=-1):
                    mini=min(mini,abs(last1-last2))
        if(mini==float('inf')):
            return -1
        return mini
            

        