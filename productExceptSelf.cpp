class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n, 1);
        for(int i = 1; i < n; i++) {
            ans[i] = nums[i-1] * ans[i-1];
        }
        int p = 1;
        for(int i = n - 2; i >= 0; i--) {
            p *= nums[i+1];
            ans[i] *= p;
        }
        return ans;
    }
};