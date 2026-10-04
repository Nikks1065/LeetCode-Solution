class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        const long long NEG = -(1LL<<60);
        long long plus0 = NEG;
        long long minus0 = NEG;
        long long plus1 = NEG;
        long long minus1 = NEG;

        long long ans = NEG;
        for(long long x : nums) {
            long long newPlus0 = max(x, minus0+x);
            long long newMinus0 = plus0 - x;
            long long newPlus1 = max(plus0, minus1+x);
            long long newMinus1 = max(minus0, plus1-x);
            plus0 = newPlus0;
            minus0 = newMinus0;
            plus1 = newPlus1;
            minus1 = newMinus1;
            ans = max({ans, plus0, minus0, plus1, minus1});
        }
        return ans;
    }
};