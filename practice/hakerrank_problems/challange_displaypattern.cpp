#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int col,row;
// while(row == 1 && col == 1){
    for(int i = 1;i<=n;i++){
        for(int j=2;j<=n;j++){
            if(i == 1 || j == n){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }

        cout<<endl;
    }
    row += 2;
    for(int i = 1;i<=n-1;i++){
        for(int j = 2;j<=n-2;j++){
            if(i == 1 || j == n-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
// }

return 0;
}