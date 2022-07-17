class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length()) return false;
        vector<int> count(26);
        for( int i=0 ; i< s.length(); i++){
            count[(int)s[i]-'a']++;
        }
        for( int i=0; i< t.length(); i++){
            if( count[(int)t[i]-'a'] == 0) return false;
            count[(int)t[i]-'a']--;
        }
        return true;
    }
};
