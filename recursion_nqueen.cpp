#include<bits/stdc++.h>
using namespace std;
bool placekrnasafehai(int board[][10],int i,int j,int n){
      for(int k=0;k<n;k++){
          if(board[i][k] == 1 || board[k][j] == 1){
              return false;
          }
      }
      int x = i, y = j;
      while(i >= 0 && j <= n){
          if(board[i][j] ==1){
              return false;
          }
          i--;j++;
      }
      i = x, j = y;
      while(i >= 0 && j >= 0){
          if(board[i][j] ==1){
              return false;
          }
          i--;j--;
      }

      return true;
}
bool nqueen(int board[][10],int i,int n){
    //base case
    if(i == n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]){
                    cout<<"Q"<<" ";
                }
                else 
                    cout<<"_"<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    //recursive case
    for(int j=0;j<n;j++){
        if(placekrnasafehai(board,i,j,n) == true){
            board[i][j] = 1;
            bool baatbni = nqueen(board,i+1,n);
            if(baatbni == true){
                return true;
            }
            board[i][j] = 0;
        }
    }

    return false;
}
int main(){
int n;
int board[10][10] = {0};
cin>>n;
nqueen(board,0,n);
return 0;
}