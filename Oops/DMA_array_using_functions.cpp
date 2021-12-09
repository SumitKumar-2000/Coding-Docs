#include<bits/stdc++.h>
using namespace std;

int* createArray(int n){
    int *a = new int[n];
    int number = 1;
    for(int i=0;i<n;i++){
        a[i] = number;
        number += 2;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int *arr = createArray(n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
return 0;
}