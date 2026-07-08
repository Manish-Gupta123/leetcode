class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
      long long revnum=0;
        int digit;
        int dup = x;
        while(x != 0)
        {
            digit = x % 10;
            
            revnum = (revnum * 10) + digit;
            x = x/10;
        }
        if(revnum == dup){
            return true;
        }
        else { return false;
        }
    }
};