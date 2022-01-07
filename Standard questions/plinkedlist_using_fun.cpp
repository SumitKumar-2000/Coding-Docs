#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next; /// creating pointer of type node to point another node,,jis class ke andar usi ka pointer hota h
                /// we call that self referential class ,, ye khud hi ko refer kr rhi h

    node(int d)
    { /// creating consructor
        data = d;
        next = NULL;
    }
};
int lengthLL(node *head)
{ /// returning length of linked-list
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insertatfront(node *&head, node *&tail, int d)
{                          //inserting node at front ,, calling by reference because data is updating for every new node
    node *n = new node(d); // creating new node dynamically using DMA
    if (head == NULL)
    {
        head = tail = n;
    }
    else
    {
        n->next = head; // new node pointing to previous node
        head = n;
    }
}
void insertatback(node *&head, node *&tail, int d)
{                          //inserting node at front ,, calling by reference because data is updating for every new node
    node *n = new node(d); // creating new node dynamically using DMA
    if (head == NULL)
    {
        head = tail = n;
    }
    else
    {
        tail->next = n; // previous node pointing to new node
        tail = n;
    }
}
void insertatmiddle(node *head, node *tail, int pos, int d)
{
    if (pos == 0)
    {
        insertatfront(head, tail, d);
    }
    else if (pos >= lengthLL(head))
    {
        insertatback(head, tail, d);
    }
    else
    {
        int i = 1;
        node *t = head;
        while (i <= pos - 1)
        {
            t = t->next;
            i++;
        }
        node *n = new node(d);
        n->next = t->next;
        t->next = n;
    }
}
void printall(node *head)
{ /// printing the data
    while (head != NULL)
    {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << "NULL" << endl
         << endl;
}

void deleteatfront(node *&head, node *tail)
{ //deleting the node from front
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
void deleteatend(node *head, node *tail)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    else
    {
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail; /// after deleting the node it points to garbage value
        tail = temp;
        tail->next = NULL;
    }
}
void deleteatmid(node *head, node *tail, int pos)
{
    if (pos == 0)
    {
        deleteatfront(head, tail);
    }
    else if (pos < lengthLL(head))
    {
        node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        node *n = temp->next; // this pointer n is created to set the pointer at the node to be deleted
        temp->next = n->next;
        delete n;
    }
}
// searching in link list
void searchll(node *head, int key)
{
    // node* temp = head;  /// or we can use head directly
    bool isfound = false;

    while (head != NULL)
    {
        if (head->data == key)
        {
            cout << "DATA FOUND" << endl
                 << endl;
            isfound = true;
            break;
        }
        head = head->next;
    }
    if (isfound == false)
    {
        cout << "DATA NOT FOUND" << endl
             << endl;
    }
}
void searchLLrecursion(node *head, int key)
{
    //base case
    if (head == NULL)
    {
        cout << "not found" << endl;
    }
    //recursive case
    if (head->data == key)
    {
        cout << "found" << endl;
        return;
    }
    else
        searchLLrecursion(head->next, key);
}

void reverseLL(node *&head, node *&tail)
{                                  /// pass by reference because values of tail and head are actually changing
    node *p = NULL, *c = head, *n; // previous starting node , current node, node for traversal

    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    swap(head, tail); // or tail = head ; head = p;
}
node *mid(node *head)
{ // finding middle point without using length of the ll
    if (head == NULL)
    {
        return NULL;
    }
    node *s = head;
    node *f = head->next;
    while (f != NULL and f->next != NULL)
    {
        f = f->next->next;
        s = s->next;
    }
    return s;
}

// void bubblesort(node *&head)
// {
//     for (int i = 0; i < lengthLL(head) - 1; i++)
//     {
//         node* c = head;
//         node* p = NULL;
//         while ((c != NULL) and (c->next != NULL))
//             {
//                 node *n = c->next;
//                 if (c -> data > n -> data)
//                 {
//                     //swapping hogi
//                     if (p == NULL)
//                     {
//                         // if p == null , head change hoga
//                         C->next = n->next;
//                         n->next = c;
//                         p = head = n;
//                     }
//                     else
//                     {
//                         //head change nhi hoga
//                         p->next = c->next;
//                         c->next = n->next;
//                         n->next = c;
//                         p = n;
//                     }
//                 }
//                 else
//                 {
//                     // swapping nhi hogi
//                     p = c;
//                     c = n;
//                 }
//             }
//     }
// }

int main()
{
    node *head, *tail;  // head points to the address of first node , tail points to the address of last node
    head = tail = NULL; // initally head and tail doesn't points to valid address thats why they are assigned to NULL

    // cout<<"inserting at front : "<<endl;
    // insertatfront(head,tail,1);
    // insertatfront(head,tail,2);
    // insertatfront(head,tail,3);
    // insertatfront(head,tail,4);
    // insertatfront(head,tail,5);
    // printall(head);
    // cout<<endl;
    cout << "inserting at back : " << endl;
    insertatback(head, tail, 1);
    insertatback(head, tail, 2);
    insertatback(head, tail, 3);
    insertatback(head, tail, 4);
    insertatback(head, tail, 5);
    printall(head);

    node *ans = mid(head);
    if (ans == NULL)
    {
        cout << "Mid not exit" << endl;
    }
    else
    {
        cout << "Mid Found is : " << ans->data << endl;
    }

    // reverseLL(head,tail);
    // printall(head);
    // bubblesort(head);
    // printall(head);
    
    cout<<"inserting at middle :"<<endl;
    insertatmiddle(head,tail,2,6);

    // deleteatfront(head,tail);
    // deleteatend(head,tail);

    // deleteatmid(head,tail,2);
    // searchll(head, 7);
    // searchLLrecursion(head, 7);
    // reverseLL(head,tail);
    // printall(head);
    return 0;
}