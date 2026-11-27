class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixMax;
        prefixMax.push_back(nums[0]);
        vector<int> suffixMin(n);
        for(int i=1; i<n; i++) {
            prefixMax.push_back(max(prefixMax[i-1], nums[i]));
        }
        int minVal = INT_MAX;
        for(int i=n-1; i>=0; i--) {
            minVal = min(minVal, nums[i]);
            suffixMin[i] = minVal;
        }
        for(int i=0; i<n; i++) {
            if(prefixMax[i]-suffixMin[i] <=k) return i;
        }
        return -1;
    }
};