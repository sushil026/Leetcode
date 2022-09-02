class Solution {
    public int hammingDistance(int x, int y) {
        int c = x^y;
        int cp = 0;
        while ( c!=0){
            cp++;
            c = c&c-1;
        }
        return cp;
    }
}