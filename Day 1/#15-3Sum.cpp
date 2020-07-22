class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> result;
        for(int i=0;i<nums.size()-2;i++){
            int target= -nums[0];
            map <int,int> m;
            
            vector <int> temp(3);
            for(int j=i+1;j<nums.size();j++){
                m[nums[j]]=j;
            }
            for(int k=i+1;k<nums.size();k++){
                int complement = target-nums[k];
                
                if(nums[complement] && nums[complement]!=k){
                    temp[0]=i;
                    temp[1]=k;
                    temp[2]=nums[complement];
                }
        
            }
            result.push_back(temp);
        
        }
        return result;
    }
};
