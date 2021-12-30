#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m; // taking input for rows and columns respectively
cin>>n>>m;

    int **a = new int *[n];  // creating 2D array dynamically 
    for(int i=0;i<n;i++){    
        a[i] = new int[m];    // for n row indeces , new dynamic array in created with m no. of columns
    }

    for(int i=0;i<n;i++){         // input 2d array
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){         // output 2d arrya
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // note --> it's important to free the memorey which has been allocated dynamically

    for(int i=0;i<n;i++){         // this will free the space taken by the column pointers
        delete []arr[i];
    }
    delete[]arr;                  // this will free the space taken by the row pointers
    
return 0;
}