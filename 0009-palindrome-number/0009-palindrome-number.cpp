class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0 ;
        int reverse=0 , rem , num=x;
        while(num)
        {
            rem= num%10;
            num = num/10;
            if(reverse>INT_MAX/10)
            return 0;
            reverse = reverse*10 + rem ;
        };
        if (reverse==x)
        return 1 ;
        else
        return 0 ;
    }
};    