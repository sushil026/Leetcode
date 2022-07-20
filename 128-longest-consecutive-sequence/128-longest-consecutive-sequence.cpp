class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for( int i:nums)
            s.insert(i);
        int lng = 0;
        for( int i =0; i< nums.size(); i++){
            int num = nums[i];
            if( s.count( num-1)){ continue;}
            int len =1;
            while( s.count( num+1)){
                len++;
                num++;
            } lng = max(lng,len);
        }
        return lng;
    }
};