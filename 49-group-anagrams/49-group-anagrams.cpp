class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for( string str : strs){
            string x = str;
            sort(str.begin(), str.end());
            if( mp.find(str) != mp.end()){
                mp[str].push_back(x);
            }else{
                mp[str] = {x};
            }
        }
        vector< vector<string>> result;
        for (auto it = mp.begin(); it != mp.end(); it++){
            result.push_back(it->second);
        }
        return result;
    }
};