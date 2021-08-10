#include<bits/stdc++.h>
using namespace std;
int sorting(int a[],int n){
   sort(a,a+n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
}

int main(){
    
    int a[] = {13,8,3,7,6,9};
    int n=6;
    cout<<sorting(a,n); 
return 0;
}