class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unset;
        for( int i =0; i< nums.size(); i++){
            if( unset.find(nums[i]) != unset.end()) return true;
            unset.insert(nums[i]);
        } return false;
    }
};