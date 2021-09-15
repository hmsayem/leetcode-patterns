class Solution {
public:
    int dp[50];
    int climb(int n, int l){
        if(l > n) return 0;
        else if(l == n) return 1;
        if(dp[l] != -1) return dp[l];
        return dp[l] = climb(n, l+1)+climb(n, l+2);
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return climb(n,0);
    }
};