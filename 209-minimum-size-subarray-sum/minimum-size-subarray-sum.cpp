class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int min_len=INT_MAX;
        int l=0,r=0,sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>=target){
                min_len=min(min_len,(r-l+1));
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(min_len!=INT_MAX){
            return min_len;
        }
        return 0;    
    }
};