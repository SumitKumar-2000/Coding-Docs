#include<iostream>
using namespace std;
int fact(int n){
    // base case
        if(n==0)
            return 1;
    // recursive case
    return n * fact(n-1); //calling funtion with in a function
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}