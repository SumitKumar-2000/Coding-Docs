#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
};
void insertfromend(node *&head,node *&tail,int d){
    node *n = new node(d);
    if(head == NULL)
        head = tail = n;
    else{
        tail->next = n;
        tail = n;
    }
}
node* mid_node(node* &head){
    node* slow = head;
    node* fast = head->next;
    if(head == NULL){
        return  NULL;
    }
    while(fast != NULL and fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node *merge(node *&h1,node *&h2){
    //base case
    if(h1 == NULL){
        return h2;
    }
    if(h2 == NULL){
        return h1;
    }

    //recursive case
    node *newhead = NULL;   
    if(h1->data < h2->data){
        newhead = h1;
        newhead->next = merge(h1->next,h2);
    }
    else{
        newhead = h2;
        newhead->next = merge(h1,h2->next);    
    }

    return newhead;
}
node *merge_sort(node *head){
    //base case
    // if(head == NULL)
    //     return head;
    // if(head ->next == NULL)
    //     return head;
    if(head == NULL || head->next == NULL){
        return head;
    }
    //recursive case
    // 1. divide
    node *mid = mid_node(head);
    node *a = head;
    node *b = mid->next;
    mid->next = NULL;
    // 2. sort
    a = merge_sort(a);
    b = merge_sort(b);
    // 3. merge
    node *newHead = merge(a,b);
    return newHead;
}
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node *head, *tail;
    head = tail = NULL;
    insertfromend(head,tail,5);   
    insertfromend(head,tail,2);   
    insertfromend(head,tail,1);   
    insertfromend(head,tail,7);   
    insertfromend(head,tail,6);   
    insertfromend(head,tail,3);   
    print(head);

    head = merge_sort(head);
    print(head);



    return 0;
}