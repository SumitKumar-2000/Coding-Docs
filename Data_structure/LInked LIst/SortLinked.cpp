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
    void insertathead(node * &head,int d){
        node * n = new node(d);
        if(head == NULL){
            head = n;
        }

        else{
            n->next = head;
            head = n;
        }
    }

    void sort(node * &head){
        node * i = head;
        node * j = i->next;

        while(i->next != NULL){
            while(j != NULL){
                if(i->data > j->data){
                    swap(i->data,j->data);
                }
                j = j->next;
            }
            i = i->next;
            j = i->next;
        }
    }

    void print(node * head){

        while(head != NULL){
            cout<<head->data<<"-->";
            head = head->next;
        }
        cout<<"NULL"<<endl;
    }

    int main(){
        
        node * head;
        head = NULL;

        insertathead(head,4);
        insertathead(head,2);
        insertathead(head,4);
        insertathead(head,1);
        insertathead(head,9);
        insertathead(head,8);
        print(head);

        sort(head);

        print(head);

        return 0;
    }