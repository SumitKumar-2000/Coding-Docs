#include <bits/stdc++.h>
using namespace std;
// jis class ke andar usi ka pointer
// we call that class self referential class

class node
{ // node ke andar node ka hi pointer h , isi liye ise self referential class khte h
public:
    int data;
    node *next;

    node(int d)   /// creating node constructor
    {     
        data = d;           
        next = NULL; // setting next to NULL
    }
};

// ------------------ length of node ----------------------------------
int length(node *head){
    int count = 0;
    while(head != NULL){
        head = head->next;
        count++;
    }
    return count;
}
// --------------------------------------------------------------------

//------insertion of node ------------------------------------------------------------------------------------

// insert at front ----------------------
void insert_at_front(node *&head, node *&tail, int d){   // passing head, tail as call by reference to reflect the changes made to head and tail
    node* n = new node (d);   // calling constructor at the same time, at the time of creation of node
    if(head == NULL){
        head = tail = n;
    }
    else{
        n->next = head;    // as n is address pointing to node thus pointing using arrow operator '->'
        head = n; 
    }
}

// insert at end -------------------------
void insert_at_end(node *&head, node *&tail, int d){
    node* n = new node (d);
    if(head == NULL){
        head = tail = n;
    }
    else{
        tail->next = n;
        tail = n;
    }
}

// Both insert at the mid can be used 
// 1.)
void insert_at_mid(node* &head,node*&tail,int data,int index){
    node *n = new node (data); 
    node *temp = head;
    if(head == NULL){
        head = tail = n;
    }    
    else if(index == 0){
        insert_at_front(head,tail,data);
    }
    else if(index >= length(head)){
        insert_at_end(head,tail,data);
    }
    else{
        int count = 0;
        while(temp!= NULL){
            if(count++ == index-1){
                n->next = temp->next;
                temp->next = n;
                break;
            }
            temp = temp->next;
        }
    }
}
//2.))
// void insert_at_mid(node* &head,node*&tail,int data,int index){
//     node *n = new node (data); 
//     node *temp = head;
//     if(head == NULL){
//         head = tail = n;
//     }    
//     else if(index == 0){
//         insert_at_front(head,tail,data);
//     }
//     else if(index >= length(head)){
//         insert_at_end(head,tail,data);
//     }
//     else{
//         int count = 1;
//         while(count<=index-1){
//             temp = temp->next;
//             count++;
//         }
//         n->next = temp->next;
//         temp->next = n;
//     }
// }
//---------------------------------------------------------------------------------------

//-------------Deletion of node ---------------------------------------------------------

//Delete at front
void deleteatfront(node *&head,node *&tail){
    if(head == NULL)
        return;
    else if(head->next == NULL){
        delete head;
        head = tail = NULL;
    }
    else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
 //Delete at end
void deleteatend(node *&head, node *&tail){
    if(head == NULL)
        return;
    else if(head->next == NULL){
        delete head;
        head = tail = NULL;
    }
    else{
        node *temp = head;
        while(temp->next != tail){
            tail = tail->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}

// Delete from mid
void deleteatmid(node *&head,node *&tail,int index){
    if(index == 0){
        deleteatfront(head,tail);
    }
    else if(index >= length(head)){  // do nothing because there is no element present to delete at index/position >= length

    }
    else{
        int count = 1;
        node *temp = head;
        while(count < index){
            temp = temp->next;
            count++;
        }
        node *temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }
}
//--------------------------------------------------------
// search in linked list
void search(node *head,int key){
    node *temp = head;
    while(temp != NULL){    
        if(temp->data == key){
            cout<<"key found ";
            return;        
        }
        temp = temp->next;
    }
    cout<<"key not found"<<endl;
}
// search using recursion
void recursion_search(node *head,int key){
    //base case
    if(head == NULL){
        cout<<"not found"<<endl;
        return;
    }
    //recursive case
    if(head->data == key){
        cout<<"key found"<<endl;
        return;
    }
    else{
        recursion_search(head->next,key);
    }

}
//--------------------------------------------------

// linked list reverse
void reverse(node *&head,node *&tail){
    node *p = NULL, *c = head, *nxt;

    while(c!=NULL){
        nxt = c->next;
        c->next = p;
        p = c;
        c = nxt;
    }
    swap(head,tail);
    // or
    // tail = head;
    // head = p;   
}
// --------------------------------------------------
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

void print(node *head){   // in case of printing no need of changing the value of head thus passing it as call by value;
    node* temp = head;
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node *head, *tail;    //// head and tail are objects, refering to the class node
    head = tail = NULL;

    insert_at_front(head,tail,1);
    insert_at_front(head,tail,2);    
    insert_at_front(head,tail,3);
    insert_at_front(head,tail,4);
    insert_at_end(head,tail,1);
    insert_at_end(head,tail,2);
    insert_at_end(head,tail,3);
    insert_at_end(head,tail,4);
    insert_at_end(head,tail,5);
    print(head);

    // insert_at_mid(head,tail,6,2);
    // print(head);
    // insert_at_mid(head,tail,9,5);
    // print(head);

    // deleteatfront(head,tail);
    // print(head);
    // cout<<"length of linked list :"<<length(head);

    // deleteatmid(head,tail,4);
    // reverse(head,tail);
    // print(head);
    node* ans = mid_node(head);
    if(ans == NULL){
        cout<<"no mid element"<<endl;
    }
    else{
        cout<<"mid element :"<<ans->data;
    }
    return 0;
}