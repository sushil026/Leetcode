class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        vector<int> res;
        while( i<j){
            int s= numbers[i]+numbers[j];
            if( s >target){ j--;}
            else if( s <target){ i++;}
            else{
                res.push_back( i+1);
                res.push_back( j+1);
                break;
            }
        }
        return res;
    }
};