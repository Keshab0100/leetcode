class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1)
            return 0;
        int l = 0;
        int r = 0;
        int ans = 0;
        int mul = 1;
        while (r < nums.size()) {
            mul *= nums[r];
            while(mul>=k){
                mul /= nums[l++];
            }
            ans+=1+(r-l);
            r++;
        }
        return ans;
    }
};
