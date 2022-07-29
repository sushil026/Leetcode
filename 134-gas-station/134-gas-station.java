class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int gs =0;
        int cst= 0;
        int n = cost.length;
        for( int i=0; i< n; i++){
            gs+= gas[i];
            cst+= cost[i];
        }
        if( cst> gs){ return -1;}
        int tot= 0;
        int res= 0;
        for( int i=0; i< n; i++){
            tot += (gas[i]-cost[i]);
            if( tot<0){
                tot = 0;
                res = i+1;
            }
        }
        return res;
    }
}