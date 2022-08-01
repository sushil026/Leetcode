class Solution {

    public int missingNumber(int[] nums) {
        int total = nums.length * (nums.length + 1) / 2;
        for (int i = 0; i < nums.length; i++) {
            total -= nums[i];
        }
        return total ;
    }
}