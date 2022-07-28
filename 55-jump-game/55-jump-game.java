class Solution {
    public boolean canJump(int[] nums) {
        int reach = 0;
        for(int i =0; i< nums.length; i++){
            if( nums[i]+i > reach){
                reach = nums[i]+i;
            }
            if( reach ==i){
                break;
            }
        }
        return reach>=nums.length-1;
    }
}