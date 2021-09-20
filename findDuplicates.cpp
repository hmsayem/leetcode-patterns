// Problem 442. Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector <int> duplicates;
        for(int i = 0; i < nums.size(); i++) {
            int curr = abs(nums[i]) - 1;
            if(nums[curr] < 0) {
                duplicates.push_back(curr + 1);
            }
            nums[curr] = -nums[curr];
        }
        return duplicates;
    }
};