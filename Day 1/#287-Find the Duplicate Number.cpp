class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        int result;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]])
                m[nums[i]]++;
            else
                m[nums[i]]=1;
        }
        
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>=2){
                result=nums[i];
                break;
            }
        }
        return result;
    }
};
