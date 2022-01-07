#include<iostream>
using namespace std;
int main(){
    int a=10, *x = NULL;
    int *aptr = &a;

    char ch = 'A';
    char*chptr = &ch;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<*(&a)<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<chptr<<endl;
    cout<<x<<endl;


    cout<<"size of address of a: "<<sizeof(&a);
    return 0;
}