#include<iostream>
using namespace std;
int main(){
    int temp;
    cin>>temp;
    int a[] = {1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        if(temp == a[i]){
            cout<<"found"<<a[i];
        }
        else{
            cout<<"not found";
        }
    }
}