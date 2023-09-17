class Solution {
public:
    bool isPowerOffour(int n) {
         if(n<=0)
        return false;
        if(n==1)
        return true;
        return n%4==0 && isPowerOffour(n/4);
    }
};
