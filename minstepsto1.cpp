#include<bits/stdc++.h>
using namespace std;
int topdown(int n,int *dp){
    //base case
    if(n == 1){
        return dp[n] = 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    //recursive case
    int op1,op2,op3;
    op1 = op2 = op3 = INT_MAX;

    op1 = topdown(n-1, dp);
    if(n%2 == 0){
        op2 = topdown(n/2,dp);
    }
    if(n%3 == 0){
        op3 = topdown(n/3,dp);
    }

    return dp[n] = min(op1,min(op2,op3)) + 1;

}
int bottomup(int n){
    int dp[100000];
    dp[1] = 0;

    for(int i = 2;i<=n;i++){
        int op1,op2,op3;
        op1  = op2 = op3 = INT_MAX;
        op1 = dp[n-1];
        if(i % 2 == 0){
            op2 = dp[i / 2];
        }
        if(i % 3 == 0 ){
            op3 = dp[i / 3];
        }
        dp[i] = min(op1,min(op2,op3)) + 1;
    }

    return dp[n];
}
int main(){
    int n;
    cin>>n;

    int dp[10000];
    for(int i=0;i<=n;i++){
        dp[i] = -1;
    }
    cout<<topdown(n,dp)<<" ";
return 0;
}