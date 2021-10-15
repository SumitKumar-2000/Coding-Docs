#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next; /// creating pointer of type node to point another node,,jis class ke andar usi ka pointer hota h
                    /// we call that self referential class ,, ye khud hi ko refer kr rhi h
        
        node(int d){        /// creating consructor
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

    cout<<a.data<<" --> "<<a.next->data<<" --> "<<a.next->next->data<<" --> "<<"NULL"<<endl; /// USING ARRAW OPERATOR " -> " 
    cout<<endl;
    // cout<<a.data<<" --> "<< a.next.data; /// WITHOUT USING ARROW OPERATOR 
    return 0;
}