class Solution {
public:
    int reversDigits(int num)
    {
        int rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        return rev_num;
    }
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            int x=reversDigits(i);
            if(x+i==num)
                return true;
        }
        return false;
    }
};
