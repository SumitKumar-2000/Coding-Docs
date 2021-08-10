#include<iostream>
using namespace std;
void update(int *x){   // call by reference using pointer
    *x += 1;
}
void update1(int &x){
    x += 1;
}
int main(){
    int a=10;
    update(&a);
    cout<<"using pointer: "<<a;
    update(a);
    cout<<"using reference var: "<<a;
    return 0;   
}