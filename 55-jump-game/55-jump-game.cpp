class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        for(int i =0; i< nums.size(); i++){
            reach = max(i+nums[i] ,reach);
            if( reach ==i){
                break;
            }
        }
        return reach>=nums.size()-1;
    }
};