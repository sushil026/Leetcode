class Solution {
public:
    int rob(vector<int>& nums) {
        int n = 0, p = 0, c = 0;
        for( int i = 0; i< nums.size(); i++){
            n = max( p+ nums[i], c);
            p = c;
            c = n;
        }
        return c;
    }
};