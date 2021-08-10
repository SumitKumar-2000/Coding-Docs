#include<iostream>
using namespace std;
int tostring(int a[][10],int n){

    tostring(a,n/10);

    int index = n%10;
    cout<<a[][index]<<endl;
}
int main(){
int a[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
cin>>n;
tostring(a,n);
return 0;
}