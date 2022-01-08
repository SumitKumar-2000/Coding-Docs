#include<bits/stdc++.h>
using namespace std;

int Nstair(int n){

    // base case
    if(n < 0) return 0;
    if(n == 0) return 1;

    // recursive case
    return Nstair(n-1) + Nstair(n-2) ;
}

int main(){
    int n;
    cout<<" Enter the nth stair to which no. of steps to be count : "; 
    cin>>n;

    cout<<"No. of steps : "<<Nstair(n)<<endl;

    return 0;
}