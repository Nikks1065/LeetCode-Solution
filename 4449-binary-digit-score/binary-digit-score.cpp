class Solution {
public:
    int calculateScore(int a, int b) {
        int s1 = 0;
        int s2 = 0;
        while(a>0) {
            int rem1 = a % 2;
            if(rem1 == 1) s1++;
            a = a / 2;
        }
        while(b>0) {
            int rem2 = b % 2;
            if(rem2 == 1) s2++;
            b = b / 2;
        }
        if(s1 < s2) return s2/s1;
        return s1*s2;
    }
};