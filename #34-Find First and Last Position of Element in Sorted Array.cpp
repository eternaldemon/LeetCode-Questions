class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int b = upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        vector<int> result(2,-1);
        
        if(a>=0&&a<nums.size() && b>=0 && b<nums.size()){
            if(nums[a]==target && nums[b]==target){
            result[0]=a;
            result[1]=b;
            }
        }
        return result;
    }
};
