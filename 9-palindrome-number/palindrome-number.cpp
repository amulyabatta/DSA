class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0){
            return false;
        }
        long rev=0;
        long org=n;
        while(n>0){
            int rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
        return org==rev;
        
    }
};