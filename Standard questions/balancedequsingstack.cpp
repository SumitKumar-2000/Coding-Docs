#include<bits/stdc++.h>
using namespace std;
bool isbalanced(char *a){
    stack<char> s;
    for(int i=0;a[i] != '\0';i++){
        char ch = a[i];
        switch(ch){
            case '(':
            case '{':
            case '[':
                s.push(ch);
                break;
            case ')':
                if(!s.empty() and s.top() == '('){
                    s.pop();
                }
                else {
                    return false;
                }
                break;
            case ']':
                if(!s.empty() and s.top() == '['){
                    s.pop();
                }
                else {
                    return false;
                }
                break;
            case '}':
                if(!s.empty() and s.top() == '{'){
                    s.pop();
                }
                else {
                    return false;
                }
                break;
            default:
                if(ch<'a' || ch>'z'){
                    cout<<"break";
                }
        }
    }
}
int main(){
    char a[] = "{a+[b+c]*e+(f+d)}";
return 0;
}