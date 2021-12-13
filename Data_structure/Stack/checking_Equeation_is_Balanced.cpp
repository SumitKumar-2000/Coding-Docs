#include<bits/stdc++.h>
using namespace std;

bool isbalanced(string st){
    stack<char> s;
    for(int i=0;st[i]!='\0';i++){
        char ch = st[i];
        switch(ch){
            case '{':
            case '(':
            case '[':
                    s.push(ch);
                        break;
            case '}':
                    if((!s.empty()) and s.top()=='{'){
                        s.pop();
                        break;
                    }
                    else return false;
            case ']':
                    if((!s.empty()) and s.top()=='['){
                        s.pop();
                        break;
                    }
                    else return false;
            case ')':
                    if((!s.empty()) and s.top()=='('){
                        s.pop();
                        break;
                    }
                    else return false;
        }
    }

    if(s.empty()) return true;
    return false;
}
int main(){
    string st = "{[a+b]*e+(f+d)}";
    if(isbalanced(st)){
        cout<<"Balanced"<<endl;
    }
    else cout<<"UnBalanced"<<endl;

    return 0;
}