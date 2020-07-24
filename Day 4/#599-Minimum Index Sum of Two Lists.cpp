class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int m=list1.size(),n=list2.size();
        vector<string> ans;
        int sum = INT_MAX;
        int min=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(list1[i]==list2[j]){
                   min = i+j;
                if(sum>min){
                    sum = min;
                    ans.clear();
                    ans.push_back(list1[i]);
                    }
                else if(sum==min){
                    
                    ans.push_back(list1[i]);
                    }
                }
                
            }
        }
        return ans;
    }
};
