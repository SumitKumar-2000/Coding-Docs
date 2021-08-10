#include<iostream>
using namespace std;
int sol[10][10] = {0};
bool ratinmaze(char maze[][5],int i,int j, int n, int m){
    //base case
    if(i == n-1 && j == m-1){
        sol[i][j] = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    //recursive case
    sol[i][j] = 1;
    // right ase rasta dekh kr aa
    if(j+1 < m && maze[i][j+1] != 'x'){
        bool rightornot = ratinmaze(maze,i,j+1,n,m);
        if(rightornot == true){
            return true;
        }
    }
    // neeche se rasta dekh kr aa
    if(i+1<n && maze[i+1][j] != 'x'){
        bool leftornot = ratinmaze(maze,i+1,j,n,m);
        if(leftornot == true){
            return true;
        }
    }

    sol[i][j] = 0;
    return false; 
}
int main(){
char maze[][5] = { 
    "0000",
    "00xx",
    "0000",
    "xx00"
};
int n=4,m=4;
ratinmaze(maze,0,0,n,m);
return 0;
}