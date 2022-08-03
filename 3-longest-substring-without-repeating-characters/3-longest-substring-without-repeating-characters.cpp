class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_set<char> cSet;
        int l = 0, r = 0;
        while( r < s.size()){
            if( cSet.find(s[r]) == cSet.end()){
                cSet.insert(s[r]);
                res = max(res, r-l+1);
                r++;
            }
            else{
                cSet.erase(s[l]);
                l++;
            }
        }
        return res;
    }
};