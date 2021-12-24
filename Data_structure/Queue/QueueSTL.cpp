#include<bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}



int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    printQueue(q);
    return 0;
}