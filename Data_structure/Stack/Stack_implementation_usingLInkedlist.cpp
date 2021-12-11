#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    int data;
    Stack *next;

    Stack(int d){
        data = d;
        next = NULL;
    }

    
};
void Push(Stack * &head,int d){
    Stack *s = new Stack(d);
    if(head == NULL){
        head = s;
    }
    else{
        s->next = head;
        head = s;
    }
}
void Pop(Stack *&head){
    if(head == NULL)
        return;
    else if(head->next == NULL){
        delete head;
        head = NULL;
    }
    else{
        Stack *temp = head;
        head = head->next;
        delete temp;
    }
}
bool empty(Stack *head){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}
int top(Stack* &head){
    return head->data;
}
int main(){
    Stack * head;
    head = NULL;

    Push(head,1);
    Push(head,2);
    Push(head,3);
    Push(head,4);
    
    while(!empty(head)){
        cout<<top(head)<<endl;
        Pop(head);
    }
    return 0;
}