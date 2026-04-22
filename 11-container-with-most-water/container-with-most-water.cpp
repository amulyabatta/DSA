class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        int max_water=0;
        while(l<r){
            max_water=max(max_water,(min(nums[l],nums[r])*(r-l)));
            if(nums[l]<=nums[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max_water;
        
    }
};