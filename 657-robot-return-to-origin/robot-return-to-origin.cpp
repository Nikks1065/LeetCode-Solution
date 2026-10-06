class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int countU = 0;
        int countD = 0;
        int countL = 0;
        int countR = 0;
        for(int i=0; i<n; i++) {
            if(moves[i] == 'U') countU++;
            else if(moves[i] == 'D') countD++;
            else if(moves[i] == 'L') countL++;
            else if(moves[i] == 'R') countR++;
        }
        int ans1 = abs(countU-countD);
        int ans2 = abs(countL-countR);
        return ans1+ans2 == 0;
    }
};