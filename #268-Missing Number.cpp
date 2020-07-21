class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=0,sum=0;
        for(int i=1;i<=nums.size();i++){
            result=result+i;
            sum=sum+nums[i-1];
        }
        result=result-sum;
        return result;
        
    }
};
