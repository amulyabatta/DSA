class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,count=0;
        for(auto num : nums){
            sum+=num;
            int prefixSum=sum-k;
            if(mp.find(prefixSum)!=mp.end()){
                count+=mp[prefixSum];
            }
            mp[sum]++;
        }
        return count;
        
    }
};