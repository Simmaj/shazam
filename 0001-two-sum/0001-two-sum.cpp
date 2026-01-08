class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>rest;
        for (int i = 0; i < nums.size(); i++){
           int lookup = target - nums[i];
           if(rest.count(lookup)){
            return{rest[lookup],i};
           }
           rest[nums[i]]=i;
        }
        return{};
    }
};