// Problem 268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            res = res ^ i;
            res = res ^ nums[i];
        }
        res = res ^ nums.size();
        return res;
    }
};