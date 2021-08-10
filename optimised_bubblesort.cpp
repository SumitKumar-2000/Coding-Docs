#include<iostream>
using namespace std;
int main(){
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);
    int count=0;
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        for(int j = 0;j< n-i-1;j++){
            if(a[j]>a[j+1]){
            // int temp = a[j];
            // a[j] = a[j+1];
            // a[j+1] = temp;
            swap(a[j],a[j+1]);
            count++;            //countes no. of swaps
            }
        }
        if(count == 0)
            break;
    }

    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
    return 0;
}