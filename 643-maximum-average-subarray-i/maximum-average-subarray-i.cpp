class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int max_sum=sum;
        int l=0,r=k;
        while(r<n){
            sum-=nums[l];
            sum+=nums[r];
            l++;
            r++;
            max_sum=max(max_sum,sum);
        }
        return static_cast<double>(max_sum)/k;
    }
};