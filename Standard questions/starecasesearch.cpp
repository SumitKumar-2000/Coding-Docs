#include<bits/stdc++.h>
using namespace std;
void search(int a[][100],int n,int m,int i,int j,int key){
    //base case
    if(i == n && j<0){
        return ;
    }
    if(a[i][j] == key){
        cout<<"found at indeces "<<i<<" and "<<j<<endl;
    }
    //recursive case
    if(a[i][j] < key){
         search(a,n,m,i+1,j,key);
    }
    else{
         search(a,n,m,i,j-1,key);
    }
}
int main(){
    int n,m,key;
    cin>>n>>m;

    int a[100][100];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cin>>key;

    search(a,n,m,0,m-1,key);
return 0;
}