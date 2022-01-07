#include<bits/stdc++.h>
using namespace std;
class node {
    public:
        int data;
        node* next;
        node(int d): data(d), next(NULL) {}
};
class stack {
    private:
        node* head;
    public:
        stack(){
            head = NULL;
        }
        void push(int d){
            //insert at front
            if(head == NULL){
                head = n;
            }
            else {
                node* n = new node(d);
                n->next = head;
                head = n;
            }
        }
        void pop(){
            //delete at front
            if(head == NULL){
                return ;
            }
            else if(head->next == NULL){
                delete head;
                head == NULL;
            }
            else{
                node* temp = head;
                head = head->next;
                delete temp;
            }
        }
        void empty(){
            //head == NULL
            return head == NULL;
        }
        int top(){
            //data at head
            return head->data;
        }
};
int main(){
    
return 0;
}