class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        unordered_set<int> s;
        int res = 0, sum = 0;

        for (int i = 0; i < n; i++) {
           
…
        return res;
    }
};
