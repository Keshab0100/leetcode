class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;
        int r = 1;
        while (l < nums.size()) {
            if(nums[l-1]!=nums[r]){
                nums[l]=nums[r];
                l++;
            }
            else{
                r++;
            }
            if(r==nums.size()){
                return l;
            }
        }
        return l;
    }
};
