#include<iostream>
using namespace std;
int main(){
    int a[] = {1,3,4,5};
    int n= sizeof(a)/sizeof(int);
    int temp;
    cin>>temp;
    for(int i=0;i<n;i++){
        if(temp == a[i] || temp < a[i]){
            cout<<"at index : "<< i <<endl;
            break;
        }
    }    
    if(temp > a[n-1]){
           cout<<"at index :"<<n;
    }
    return 0;
}