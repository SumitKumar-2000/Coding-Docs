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
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == key){
                cout<<"found at "<<i<<" "<<j<<" "; 
                return 0;
            }
        }
    }
}