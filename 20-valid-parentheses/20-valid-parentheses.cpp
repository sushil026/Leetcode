class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i< s.length(); i++){
            if( s[i]==']' || s[i]=='}' || s[i]==')'){
                if( st.empty()){
                    return false;
                }
                if( st.top()=='{' && s[i]!='}'){
                    return false;
                }
                if( st.top()=='(' && s[i]!=')'){
                    return false;
                }
                if( st.top()=='[' && s[i]!=']'){
                    return false;
                }
                st.pop();
            }
            else{ 
                st.push( s[i]);
            }
        }
        if( !st.empty()){ 
            return false;
        }
        return true;
    }
};