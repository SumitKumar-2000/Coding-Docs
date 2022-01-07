#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m,val = 1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = val;
            val++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<m;j++){
        if(m % 2 ==0){
            for(int i=0;i<n;i++)
                cout<<a[i][j]<<" ";
        }
        else{
            for(int i=n-1;i>=0;i--)
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}