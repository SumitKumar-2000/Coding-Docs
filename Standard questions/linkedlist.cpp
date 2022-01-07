#include<bits/stdc++.h>
using namespace std;
// jis class ke andar ussi ka pointer hota hai
// we call that class as self referential class
class node{
    public:
        int data;
        node* next;;

        node(int d){  // paramaterised constructor
            data = d;
            next = NULL;
        }
};
int main(){
    node a(1);
    node b(2);
    node c(3);

    a.next = &b;
    b.next = &c;
    cout<<a.data<<"-->"<<a.next->data <<"-->"<<a.next->next->data<<" "
    return 0;
}