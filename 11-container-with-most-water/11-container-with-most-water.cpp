class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, mx =0;
        int str = 0;
        int end = height.size()-1;
        while( str<end){
            mx = (end-str)*min(height[str],height[end]);
            maxArea = max(maxArea, mx);
            if( height[str] <= height[end]){ str++;}
            else{ end--;}
        }
        return maxArea;
    }
};