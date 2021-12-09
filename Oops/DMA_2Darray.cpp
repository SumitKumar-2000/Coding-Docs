#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,number=1;
cin>>n>>m;
    int **a = new int *[n];  // creation of 2d array using dma
    for(int i=0;i<n;i++){    
        a[i] = new int[m];
    }

    for(int i=0;i<n;i++){  // code is not runni
        for(int j=0;j<m;j++){
            a[i][j] = number++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}