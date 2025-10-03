class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){

            int s= target-nums[i];
            if (mp.find(s) != mp.end()) {
                return {mp[s],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
//Notes://
//always dry run your code//
//neeche mp mai daala bcz its given you can use one element once plsss dry run its the best and use your mind// 
