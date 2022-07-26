class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gen( n, 0, res, "");
        return res;
    }
    void gen( int n, int m, vector<string>& res, string s){
        if( n==0 && m==0){
            res.push_back(s);
            return;
        } 
        if( n>0){
            gen( n-1, m+1, res, s+"(");
        }
        if( m>0){
            gen( n, m-1, res, s+")");
        }
    }
};