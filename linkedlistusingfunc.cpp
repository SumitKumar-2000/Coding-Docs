#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int d;
        node *next;
};
void insertatfront(node* &head,node* &tail,int d){
    node* n = new node(d);
    if(head == tail){
        head = tail = n;
    }
    else {
        n->next = head;
        head = n;
    }
}

void insertatend(node* &head,node* tail,int d){
    node* n = new node(d);
    if(head == tail){
        head = tail = n;
    }
    else {
        n->next = tail;
        tail = n;
    }
}
void printall(node* head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head, *tail;
    head = tail = NULL;

    // insertatfront(head,tail,1);
    // insertatfront(head,tail,2);
    // insertatfront(head,tail,3);
    // insertatfront(head,tail,4);
    // insertatfront(head,tail,5);
    insertatfront(head,tail,1);
    insertatfront(head,tail,2);
    insertatfront(head,tail,3);
    insertatfront(head,tail,4);
    insertatfront(head,tail,5);
    printall(head);
return 0;
}