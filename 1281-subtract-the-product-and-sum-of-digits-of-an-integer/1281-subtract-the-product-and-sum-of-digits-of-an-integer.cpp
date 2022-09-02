class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, pro = 1;
        while( n){
            int c = n%10;
            sum += c;
            pro = pro*c;
            n = n/10;
        }
        return pro-sum;
    }
};