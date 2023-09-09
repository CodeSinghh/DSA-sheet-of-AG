class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int sum1 = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i <=nums.size(); i++) {
            sum = sum + i;
        }
        for (int j = 0; j <nums.size(); j++) {
            sum1 = sum1 + nums[j];
        }
        /*int m = ;*/
        return sum - sum1;
    }
};
