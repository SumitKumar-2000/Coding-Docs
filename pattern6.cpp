#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int i=1;i<=row;i++){
            cout<<"*";
        }
        cout<<" ";
        for(int i=1;i<=n-row+1;i++){
            cout<<"*";
        }
        cout<<" ";
        for(int i=1;i<=n-row+1;i++){
            cout<<"*";
        }
        cout<<" ";
        for(int i=1;i<=row;i++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}