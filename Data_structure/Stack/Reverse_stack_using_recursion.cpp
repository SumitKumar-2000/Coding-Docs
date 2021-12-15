#include<bits/stdc++.h>
using namespace std;
void insertAtend(stack<int> &s,int topElement){
    //base case
    if(s.size() == 0){
        s.push(topElement);
        return;
    }
    //recursive case
    int top = s.top();
    s.pop();
    insertAtend(s,topElement);
    s.push(top);
}

void Reverse_stack(stack<int> &s){
    //base case 
    if(s.size() == 1){
        return;
    }
    //recursive case
    int topElement = s.top();
    s.pop();
    Reverse_stack(s);
    insertAtend(s,topElement);
}

void printstack(stack<int> s){
    while(s.size() != 0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(1);    
    s.push(2);    
    s.push(3);    
    s.push(4);

    printstack(s);
    Reverse_stack(s);
    printstack(s);

    return 0;
}