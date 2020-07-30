class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
      long long int sum = 0;
        for(int i=0;i<nums.size();i++)
            sum = sum + nums[i];
        
        if((sum+S)%2==1 || S>sum)
            return 0;
        int s = (S+sum)/2;
        vector<vector<int>> dp(nums.size()+1,vector<int>(s+1,0));
        for(int i=0;i<nums.size()+1;i++)
            dp[i][0] = 1;
        
        for(int i=1;i<nums.size()+1;i++){
            for(int j=0;j<s+1;j++){
                if(nums[i-1]<=j)
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[nums.size()][s];
    }
};
