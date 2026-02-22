class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        for(int i =0; i< nums.size();i++){
            int subs = target - nums[i];
            if(mymap.find(subs)!=mymap.end()){
                return {i, mymap[subs]};
            }
            mymap[nums[i]]=i;
        }
        return {};
    }
};
