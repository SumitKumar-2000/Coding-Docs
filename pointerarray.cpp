#include<iostream>
using namespace std;
void printarray(int *a,int n){
    for(int i=0;i<*(a+i);i++){
        cout<<*(a+i)<<endl;
    }
    cout<<endl;
}
int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    printarray(a,n);
    return 0;
}