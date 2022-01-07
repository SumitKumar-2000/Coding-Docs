#include<bits/stdc++.h>
using namespace std;
int mazeways(int i,int j){
//base case
    if(i==0 && j==0)    
        return 1;
    if(i<0 || j<0)  
        return 0;
//recursive case
    return mazeways(i,j-1) + mazeways(i-1,j);
}
int main(){
    int n,m;
    cin>>n>>m;

    cout<<mazeways(n,m);
return 0;
}