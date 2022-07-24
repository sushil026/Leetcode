class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stc;
        for( int i=0; i<tokens.size(); i++){
            string tk = tokens[i];
            if( tk == "+"){ 
                    int a= stc.top();
                    stc.pop();
                    int b= stc.top();
                    stc.pop();
                    stc.push(a+b);
                }
            else if( tk == "-"){
                    int a= stc.top();
                stc.pop();
                int b= stc.top();
                stc.pop();
                stc.push(b-a);
             }
            else if( tk == "*"){
                int a= stc.top();
                stc.pop();
                int b= stc.top();
                stc.pop();
                    stc.push(a*b);
            }
            else if( tk == "/"){
                int a= stc.top();
                stc.pop();
                int b= stc.top();
                stc.pop();
                    stc.push(b/a);
            }
            else{ stc.push( stoi(tk));}
        }
        return stc.top();
    }
};