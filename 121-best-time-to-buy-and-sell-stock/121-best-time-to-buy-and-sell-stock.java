class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int l=0, r=1;
        int maxPro = 0;
        while( r< n){
            if( prices[l] > prices[r]){
                l = r;
            }
            else{
                maxPro = Math.max( maxPro, prices[r]-prices[l]);
            }
            r++;
        }
        return maxPro;
    }
}