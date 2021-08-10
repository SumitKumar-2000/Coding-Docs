#include<iostream>
using namespace std;
int main(){
    int a[] = {1,4,6,7,86,7,868,68,5,3,356,8};
    int n = sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    cout<<endl<<n;
    return 0;
}