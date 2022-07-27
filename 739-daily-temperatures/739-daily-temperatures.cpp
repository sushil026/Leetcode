class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tem) {
        stack<pair <int,int>> stc;
        vector<int> res(tem.size());
        
        for(int i=0; i< tem.size(); i++){
            int ct = tem[i];
            int cd = i;
            while( !stc.empty() && stc.top().second < ct){
                int pd = stc.top().first;
                int pt = stc.top().second;
                res[pd] = cd - pd;
                stc.pop();
            }
            stc.push({cd, ct});
        }
        
        return res;
    }
};