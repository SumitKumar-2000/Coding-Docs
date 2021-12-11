#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;

    node(int d): data(d),next(NULL){}               //callling constructor 

    // another generic way of calling constructor
    // node(int d){
    //     data = d;
    //     next = NULL;
    // }
};

class Stack{
private:
    node *head;
public:
    Stack(){
        head = NULL;
    }
    void push(int d){
        node *n = new node(d);
        if(head == NULL){
            head = n;
        }
        else{
            n->next = head;
            head = n;
        }
    }
    void pop(){
        if(head == NULL){
            return ;
        }
        else if(head->next == NULL){
            delete head;
            head = NULL;
        }
        else{
            node*temp = head;
            head = head->next;
            delete temp;
        }
    }
    bool empty(){
        if(head == NULL){
            return true;
        }
        else return false;
    }
    int top(){
        return head->data;
    }
};
int main(){

    Stack S;
    S.push(1);       
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);

    while(!S.empty()){
        cout<<S.top()<<endl;
        S.pop();
    }
    
    return 0;
}