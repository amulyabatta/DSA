class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0){
            return false;
        }
        long rev=0;
        long org=n;
        while(n>0){
            rev=(rev*10)+n%10;
            n=n/10;
        }
        return org==rev;
        
    }
};