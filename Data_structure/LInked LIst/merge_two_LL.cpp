#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;

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
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;;
    }
    cout<<"NULL"<<endl;
}
int main(){                                                                                                                                      
    node *h1,*t1,*h2,*t2;
    h1 = t1 = h2 = t2 = NULL;
    insertfromend(h1,t1,1);
    insertfromend(h1,t1,3);
    insertfromend(h1,t1,4);
    insertfromend(h1,t1,5);
    insertfromend(h1,t1,7);
    insertfromend(h1,t1,9);
    print(h1);

    insertfromend(h2,t2,2);
    insertfromend(h2,t2,6);
    insertfromend(h2,t2,8);
    insertfromend(h2,t2,10);
    insertfromend(h2,t2,11);
    print(h2);

    node *mergeLL = merge(h1,h2);
    print(mergeLL);
    return 0;
}