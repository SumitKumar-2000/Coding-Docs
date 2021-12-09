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
void insertatfront(node *&head,int d){
    node *n = new node(d);
    if(head == NULL)
        head = n;
    else{
        n->next = head;
        head = n;   
    }
}

void insertatend(node *&head,int d){
    node *n = new node(d);
    node *temp = head;
    if(head == NULL){
        head = n;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}
void createcyclic(node *head){
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head->next->next;
}
void breakthecycle(node *&fast,node *&head){
    node *prev = head;
    while(prev->next != fast){
        prev = prev->next;
    }
    node *slow  = head;
    while(slow != fast){
        prev = fast;
        fast = fast->next;
        slow = slow->next;
    }
    prev->next = NULL;
}
bool iscyclic(node *head){
    node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            breakthecycle(fast,head);
            return true;
        }
    }
    return false;
}
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node *head;
    head = NULL;
  
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6);
    insertatend(head,7);
    insertatend(head,8);
    // print(head);

    createcyclic(head);
    
    if(iscyclic(head) == true){
        cout<<"cycle present"<<endl;
    }
    else{
        cout<<"cycle absent"<<endl;
    }

    print(head);
    return 0;
}