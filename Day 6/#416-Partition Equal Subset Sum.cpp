class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
        }
        if(sum%2==1)
            return false;
        
        int n = nums.size();
        int s  = sum/2;
        vector<vector<bool>> dp(n+1,vector<bool>(s+1,false));
	    for(int i=0;i<n+1;i++){
                dp[i][0]=true;
	        } 
	    for(int i=1;i<n+1;i++){
	        for(int j=1;j<s+1;j++){
	            if(nums[i-1]<=j)
	                dp[i][j]= dp[i-1][j-nums[i-1]] || dp[i-1][j];
	            else
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	        
	        return dp[n][s];
    }
};
