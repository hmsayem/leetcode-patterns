class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n);
        int i = 0, id = n-1, j = n - 1;
        while(i <= j) {
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];
            if(a > b) {
                ans[id] = a;
                i++;
            } else {
                ans[id] = b;
                j--;
            }
            id--;
        }
        return ans;
    }
};