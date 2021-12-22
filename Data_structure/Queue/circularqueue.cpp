#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *a;
    int cs;      // current size
    int n;       // size of array
    int front, rear;

public:    
    Queue(int s){                // s is the current size given by the user, by default size s = 5 ( in case the user don't give any size) 
        n = s;
        a = new int[n];
        front = 0;
        rear = n-1;
        cs = 0;
    }

    void push(int data){
        if(cs<n){
            rear = (rear + 1)%n;
            a[rear] = data;
            cs++;
        }
        else{
            cout<<"queue is overflow "<<endl;
        }
    }

    void pop(){
        if(cs > 0){                   // if current size will be grearter than 0, then only the elements can be removed
            front = (front + 1)%n;
            cs--;
        }
        else{
            cout<<"queue is under flow"<<endl;
        }
    }

    int front_element(){
        return a[front];
    }

    bool empty(){
        return cs == 0; 
    }

    void print(Queue &q){
        while(!q.empty()){
            cout<<q.front_element()<<endl;
            q.pop();
        }  
    }
};
int main(){
    Queue  q(10);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.print(q);

    
    return 0;
}