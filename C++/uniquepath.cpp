class Solution {
public:
    int allpath(int right, int down, int m, int n, vector<vector<int>>& dp)
    {
        if(right>=n || down>=m)
        return 0;
        if(right==n-1 && down == m-1)
        return 1;
        if(dp[right][down]!=-1)
        return dp[right][down];
        return dp[right][down] = allpath(right+1,down,m,n,dp) + allpath(right,down+1,m,n,dp);
    }
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return allpath(0,0,m,n,dp);
    }
};
