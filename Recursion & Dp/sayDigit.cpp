#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n,vector<string> &vec){
    // base case 
    if(n == 0)
        return ;
    
    int digit = n % 10;
    n = n/10;

    sayDigit(n,vec);
    cout<<vec[digit]<<" ";
    
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    vector<string> vec = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,vec);

    return 0;
}