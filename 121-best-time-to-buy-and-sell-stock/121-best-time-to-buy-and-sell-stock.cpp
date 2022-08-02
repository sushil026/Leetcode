class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int n = prices.size();
        int l = 0, r = 1;
        while( r < n){
            if( prices[r] > prices[l] ){
                int p = prices[r] - prices[l];
                maxPro = max( p, maxPro);
            }
            else{
                l = r;
            }
            r++;
        }
        return maxPro;
    }
};