#include<iostream>
using namespace std;
void mergesort(int a[], int b[], int n, int m){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    
    while(i>=0 && j>=0){
        if(a[i] > b[j]){
            a[k] = a[i];
            i--;
            k--;
        }
        else{
            a[k] = b[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        a[k] = b[j];
        k--;
        j--;
    }
}
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[100] = {1,3,5,6,8,9};
    int b[] = {2,4,7,8};
    int m = 6;
    int n = 4; 

    mergesort(a,b,m,n);
    printarray(a,m+n);

    return 0;
}