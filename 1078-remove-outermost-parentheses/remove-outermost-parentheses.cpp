class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";
        int countL = 0;
        int countR = 0;
        int start = 0; 
        for(int i=0; i<n; i++) {
            
            if(s[i] == '(') countL++;
            else countR++;
            if(countL == countR) {
                int end = i;
                for(int j=start+1; j<end; j++) {
                    ans += s[j];
                }
                start = end+1;
                countL = 0;
                countR = 0;
            }
        }
        return ans;
    }
};