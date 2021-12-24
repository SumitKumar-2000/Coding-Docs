#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node * next;

    node(int d){
        data = d;
        next = NULL;
    }
};
class Queuee{
    node *head, *tail;
public:
    Queuee(){
        head = tail = NULL;
    }

    // pushing elements from tail
    void push(int data){
        node *n = new node(data);
        if(head = tail = NULL){
            head = tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
    }

    // poping elements from head
    void pop(){
        if(head == NULL){
            return ;
        }
        else if(head -> next == NULL){
            delete head;
            head = tail = NULL;
        }
        else{
            node * temp = head;
            // cout<<temp->data;     // poped element
            head = head->next;
            delete temp;
        }
    }

    bool empty(){
        return head == NULL;
    }

    int front(){
        return head->data;
    }

};
int main(){

    Queuee  q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

     while(!q.empty()){
        cout<<q.front()<< " ";
        q.pop();
    } 

    return 0;
}