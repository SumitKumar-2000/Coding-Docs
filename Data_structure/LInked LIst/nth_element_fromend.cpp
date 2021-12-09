#include<bits/stdc++.h>
using namespace std;
class node{
public:
    node* next;
    int data;

    node(int d){
        data = d;
        next = NULL;
    }
};
void insert_atfront(node *&head,node *&tail,int d){
    node *n = new node(d);
    if(head == NULL)
        head = tail = n;
    else{
        n->next = head;
        head = n;
    }
}
void insert_atend(node *&head,node *&tail,int d){
    node *n = new node(d);
    if(head == NULL){
        head = tail = n;
    }
    else{
        tail->next = n;
        tail = n;
    }
}

node* nth_element_fromend(node *&head){
    node *slow = head;
    node *fast = head->next->next->next;

    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    return slow;

}

void print(node *head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head,*tail;
    head = tail = NULL;

    insert_atend(head,tail,1);
    insert_atend(head,tail,2);
    insert_atend(head,tail,3);
    insert_atend(head,tail,4);
    insert_atend(head,tail,5);
    insert_atend(head,tail,6);
    print(head);

    node* ans = nth_element_fromend(head);
    cout<<"3rd element from last = "<<ans->data;

    return 0;
}