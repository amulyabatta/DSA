class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0,r=0;
        long current_sum=0;
        long ans=0;
        while(r<nums.size()){
            current_sum+=nums[r];
            while((nums[r]*static_cast<long>(r-l+1)) - current_sum>k){
            current_sum-=nums[l];
            l++;
        }
        ans=max(ans,static_cast<long>(r-l+1));
        r++;
        }
        return ans;
    }
};