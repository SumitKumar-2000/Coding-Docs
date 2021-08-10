#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=n;row>=1;row--){
        char ch = 'A';
        for(int i=1;i<=row;i++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        ch --;
        for(int i=1;i<=row;i++){
            cout<<ch<<" ";
            ch--;  
        }
        cout<<endl;
    }
}