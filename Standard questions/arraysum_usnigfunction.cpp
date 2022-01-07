#include<iostream>
using namespace std;
int sum(int a[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }
    return sum;
}
int main(){
    int a[] = {1,2,3,4,5} ;
    int n = 5;
    cout<<sum(a,n);

    return 0;
}