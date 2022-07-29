class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if( hand.size()%groupSize !=0){ return false;}
        map<int, int> mp;
        for( int i=0; i<hand.size(); i++){
            mp[hand[i]]++;
        }
        while( !mp.empty()){
            int c = mp.begin()->first;
            for( int i=0; i< groupSize; i++){
                if( mp[c+i] == 0){ return false;}
                mp[c+i]--;
                if( mp[c+i]<1){
                    mp.erase(c+i);
                }
            }
        }
        return true;
    }
};