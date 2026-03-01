class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int l=0, r = 0;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0 && nums[l]!=0){
        //         l=i;
        //     }
        //     if(nums[i]!=0){
        //         r=i;
        //     }
        //     if(l<r && nums[l]==0){
        //         swap(nums[l], nums[r]);
        //         r=l;
        //         l++;
        //         i=l;
        //     }
        // }
        int l = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[l], nums[i]);
                l++; 
            }
        }
    }
};
