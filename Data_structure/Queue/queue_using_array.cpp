#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *a;
    int capacity;
    int rear;

public:
    Queue(int n){
        capacity = n;
        a = new int[n];
        rear = -1;
    }

    void push_enque(int data){
        if(rear == capacity - 1){
            cout<<"Overloaded"<<endl;
            return;
        }
        rear ++;
        a[rear] = data;
    }

    int pop_dqueue(){
        if(rear == -1){
            cout<<"Underflow"<<endl;    
            return 0;
        }
        int result = a[0];
        for(int i=0;i<rear;i++){
            a[i] = a[i-1];
        }
        rear--;
        return result;
    }

    int front(){
        if(rear == -1){
            return 0;
        }
        return a[0];
    }

    bool empty(){
        return rear == -1;
    }
};
int main(){
    Queue Q(6);
    Q.push_enque(1);
    Q.push_enque(2);
    Q.push_enque(3);
    Q.push_enque(3);
    Q.push_enque(4);
    Q.push_enque(5);

    while(!Q.empty()){
        cout<<Q.front()<<endl;
        Q.pop_dqueue();
    }

    return 0;
}