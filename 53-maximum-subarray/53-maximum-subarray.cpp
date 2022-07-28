class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int sum = INT_MIN;
        for( int i = 0; i< nums.size(); i++){
            cur += nums[i];
            sum = max(sum, cur);
            if( cur<0){
                cur = 0;
            }
        }
        return sum;
    }
};