class Solution {
public:
    int findMin(vector<int>& nums) {
        int size=nums.size();
        set<int> s;
        for(int i=0;i<size;i++){
            s.insert(nums[i]);
        }
        set<int> :: iterator it=s.begin();
        return *it;
    }
};
