#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int c[], int n,int m){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++] = a[i++]; 
        }
        else {   
            c[k++] = b[j++]; }
    }
    while(i<n){
            c[k++] = a[i++];
        }
    while (j<m){
            c[k++] = b[j++]; 
        }
}
int main(){
    int n,m;
    int a[100],b[100],c[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    merge(a,b,c,n,m);

    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
        
return 0;
}