class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r =  numbers.size()-1;
        vector<int> sum;
        while(r>l){
            if(numbers[l]+numbers[r]==target){
                sum.push_back(l+1);
                sum.push_back(r+1);
                return sum;
            }
            else if(numbers[l]+numbers[r]>target){
                r--;
            }
            else{
                l++;
            }
        }
        return sum;
    }
};
