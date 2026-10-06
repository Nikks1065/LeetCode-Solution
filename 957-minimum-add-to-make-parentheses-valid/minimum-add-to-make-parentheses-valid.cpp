class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        if(n==1) return 1;
        stack<char> st;
        int count = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '(') {
                st.push(s[i]);
                count++;
            } else {
                if(!st.empty()) {
                    st.pop();
                    count++;
                }
            }
        }
        int ans = n-count;
        int m = st.size();

        return ans+m;
    }
};