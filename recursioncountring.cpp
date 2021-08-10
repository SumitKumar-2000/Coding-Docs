#include<bits/stdc++.h>
using namespace std;
void printtailcount(int n){
    //base case 
    if(n == 0)
        return;
    //recursive case
    
    cout<<n<<" ";
    printtailcount(n-1);
}
void printheadcount(int n){
    //base case
    if(n == 0)
        return ;
    //recursive case
    printheadcount(n-1);
    cout<< n<<" ";
}
int main(){
    int n;
    cin>>n;
printheadcount(n);
printtailcount(n);
return 0;
}