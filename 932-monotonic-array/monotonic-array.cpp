class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        vector<int> asc = nums;
        vector<int> desc = nums;
        sort(asc.begin(), asc.end());
        sort(desc.begin(), desc.end(), greater<int>());
        if(nums == asc || nums == desc) {
            return true;
        }
        return false;
    }
};