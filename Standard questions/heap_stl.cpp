#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> > q; // also inplace of greater we can use less<int>

    q.push(10);
    q.push(1);
    q.push(11); 
    q.push(2); 
    q.push(3); 
    q.push(5);

    while(!q.empty()){
        cout<< q.top()<<" ";
        q.pop();
    } 
    cout<<endl;


return 0;
}