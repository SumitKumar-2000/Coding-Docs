#include<bits/stdc++.h>
using namespace std;
class node{
public:
    node* next;
    node* prev;
    int data;

    node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void insertatfront(node* &head,node* &tail,int d){
    node *n = new node(d);   // creating node
    if(head == NULL){
        head = tail = n;
    }
    else{
        head->prev = n;
        n->next = head;
        head = n;
    }
}

void insertatend(node *&head,node *&tail,int d){
    node *n = new node(d);   // creating node
    if(head == NULL){
        head = tail = n;
    }
    else{
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
}

void print(node *head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node *head,*tail;
    head = tail = NULL;

    // insertatfront(head,tail,1);
    // insertatfront(head,tail,2);
    // insertatfront(head,tail,3);
    // insertatfront(head,tail,4);
    // print(head);

    insertatend(head,tail,1);
    insertatend(head,tail,2);
    insertatend(head,tail,3);
    insertatend(head,tail,4);
    print(head);

    return 0;
}