class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int a;
      vector<int> ans;
      for( int i = 0; i < nums.size(); i++){
        ans.push_back(i);
        for( int j = i+1; j< nums.size(); j++){
          if( target == nums[i]+nums[j]){
            ans.push_back(j);
            return ans;
          }
        }
        ans.pop_back();
      }
      return ans;
    }
};