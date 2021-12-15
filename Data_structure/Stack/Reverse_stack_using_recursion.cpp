#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &s,int topElement){
    //base case
    if(s.empty()){
        s.push(topElement);
        return;
    }

    //recursive case
    int top = s.top();
    s.pop();
    insert_at_bottom(s,topElement);
    s.push(top);
}

void reverse_stack(stack<int> &s){
    //base case
    if(s.empty()){
        return ;
    }
    //recursive case
    int topElement = s.top();
    s.pop();
    reverse_stack(s);
    insert_at_bottom(s,topElement);
}

void printstack(stack<int> s){
    while(!s.empty()){
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
    reverse_stack(s);
    printstack(s);

    return 0;
}