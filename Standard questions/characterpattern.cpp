#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row = 1;row<=n;row++){
        char ch = 'A';
        for(int i=1;i<=n-row+1;i++){
            cout<<ch;
            ch++;
        }
        ch-- ; // or ch = 'A' + n - row;
        for(int i=1;i<=n-row+1;i++){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
    return 0;
}