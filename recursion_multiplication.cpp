#include<iostream>
using namespace std;
int multiply(int x,int n){
    if(n==0)
        return 0;
    return x + multiply(x,n-1);
}
int main(){
int x,n;
cin>>x>>n;
cout<<multiply(x,n);
return 0;
}