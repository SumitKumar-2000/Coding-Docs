#include<iostream>
using namespace std;
int main(){
    int r,c,val=1;
    cin>>r>>c;
    int a[100][100];
    int row,col;
    
    for(row = 0;row<r;row++){
        for( col = 0;col<c; col++){
            a[row][col] = val;
            val++;
        }
    }
    for(col = 0;col<c;col++){
        if( col % 2 == 0){
            for( row = 0;row<r; row++){
                cout<<a[row][col]<<" ";
            }
        }
        else{
            for(row = r-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}