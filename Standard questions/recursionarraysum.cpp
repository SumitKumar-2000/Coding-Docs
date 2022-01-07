#include<iostream>
using namespace std;
int arraysum(int a[],int n){
    if(n == 0)
        return 0;

    return a[0] + arraysum(a+1,n-1);
}
int arraysum1(int a[],int n,int i){
    if(i == n)
        return 0;

    return a[i] + arraysum(a,n-1,i);
}
int arraysum(int a[],int n){
    if(n == 0)
        return 0;

    return a[0] + arraysum(a+1,n-1);
}
int main(){
int n,i;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<arraysum(a,n,i);
return 0;
}