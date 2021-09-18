// Problem 303. Range Sum Query - Immutable
class NumArray {
public:
    vector <int> csum;
    
    NumArray(vector<int>& nums) {
        csum = nums;
        for(int i = 1; i < csum.size(); i++) {
            csum[i] += csum[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return left == 0 ? csum[right] : csum[right] - csum[left - 1];
    }
};