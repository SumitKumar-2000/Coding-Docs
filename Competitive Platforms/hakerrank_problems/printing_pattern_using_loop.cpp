/*  5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5  */


#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

for(int i=n;i>=1;i--){
    for(int j=n;j>i;j--){
        cout<<j<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<i<<" ";
    }
    for(int j=i+1;j<=n;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
for(int i=1;i<n;i++){
    for(int j=n;j>i;j--){
        cout<<j<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<i<<" ";
    }
    for(int j=i+1;j<=n;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}