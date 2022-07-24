class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stc;
        for( int i=0; i<tokens.size(); i++){
            string tk = tokens[i];
            if( tk.size()>1 || isdigit(tk[0])){
                stc.push( stoi(tk));
            }
            else{
                int a= stc.top();
                stc.pop();
                int b= stc.top();
                stc.pop();
                if( tk == "+"){ 
                    stc.push(a+b);
                }
                else if( tk == "-"){
                    stc.push(b-a);
                }
                else if( tk == "*"){
                    stc.push(a*b);
                }
                else if( tk == "/"){
                    stc.push(b/a);
                }    
            }
        }
        return stc.top();
    }
};