// Problem 287. Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            int curr = abs(nums[i]);
            if(nums[curr] < 0) {
                res = curr;
            }
            nums[curr] = -nums[curr];
        }
        return res;
    }
};