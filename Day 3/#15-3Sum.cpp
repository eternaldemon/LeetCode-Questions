class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> store;
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i=0;i<n;i++){
            int target = -nums[i];
            int left = i+1, right=n-1;
            
            while(left<right){
            if(nums[left]+nums[right]==target){
                store.insert({-target,nums[left],nums[right]});
                right--;
                left++;
                }
                else if(nums[left]+nums[right]>target)
                    right--;
    
                else
                    left++;
    
            }
        }
        
        for(auto i:store){
            result.push_back(i);
        }
        
        return result;
    }
};
