#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s1;
    stack<int> s2;

    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        s1.push(n);
    }

    cout<<"Elements inside s1 stack :"<<endl;
    while(!s1.empty()){
        s2.push(s1.top());
        cout<<s1.top()<<endl;
        s1.pop();
    }

    cout<<"Elements inside s2 stack :"<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }

    return 0;
}