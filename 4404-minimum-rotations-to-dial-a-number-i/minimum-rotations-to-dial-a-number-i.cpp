class Solution {
public:
    int minRotations(string s) {
        int curr = 0;
        int ans = 0;
        for(int i=0; i<10; i++) {
            int target = s[i]-'0';
            int diff = abs(curr-target);
            int rotations = min(diff, 10-diff);
            ans += rotations;
            curr = target;
        }
        return ans;
        
    }
};