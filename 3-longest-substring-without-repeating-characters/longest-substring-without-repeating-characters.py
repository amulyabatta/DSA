class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n=len(s)
        l=r=0
        length=0
        dic={}
        for r in range(n):
            dic[s[r]] = dic.get(s[r], 0) + 1
            while dic[s[r]]>1:
                dic[s[l]]-=1
                l+=1
            length=max(length,r-l+1)
        return length
        