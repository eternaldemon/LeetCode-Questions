//Done in O(n) time complexity.
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        //make a map with number of occurences of each values. Order doesn't matter so O(1) time complexity here.
        for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
        }
        vector<pair<int,int>> values;
        vector<int> result;
        //Push back values in reverse order i.e pair or value,key from map to a pair of int vector named values.
        for(const pair<int,int>& i: m){
            values.push_back({i.second,i.first});
        }
        //apply nth element stl function to get 2 most occuring elements using greater<pair<int,int>> function as comparator.
        //This takes only O(n) time
        nth_element(values.begin(),values.begin()+k,values.end(),greater<pair<int,int>>());
        //Now loop for k values and pushback them into a resulting vector/array and return it to the function.
        for(int i=k-1;i>=0;i--){
            cout<<values[i].second<<endl;
            result.push_back(values[i].second);
        }
        return result;
    }
};
