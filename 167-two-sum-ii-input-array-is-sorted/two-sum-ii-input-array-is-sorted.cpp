class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int k=nums[l]+nums[r];
            if(k==target){
                return {l+1,r+1};
            }
            else if(k>target){
                r--;
            }
            else{
                l++;
            }
        }
        return {};
    }
};