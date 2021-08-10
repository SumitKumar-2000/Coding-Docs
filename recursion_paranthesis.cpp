#include<bits/stdc++.h>
using namespace std;
void paranthesis(int index,int open,int close,int n,char output[]){
    //base case
    if(index = 2 * n){
        output[index] = '\0';
        cout<<output<<endl;
        return;
    }
    if(close<open){
        output[index] = ')';
        paranthesis(index=1,open,close+1,n,output);
    }
    if(open<n){
        output[index] = '(';
        paranthesis(index=1,open+1,close,n,output);
    }
}   
int main(){
    char output[100];
    int n;
    cin>>n;
    paranthesis(0,0,0,n,output);
return 0;
}