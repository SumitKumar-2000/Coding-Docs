#include<bits/stdc++.h>
using namespace std;
int topdown(int n){
    //base case
    if(n == 0 || n == 1){
        dp[n] = n;
        return n;
    }
    // checking agr already calculated hai
    if(dp[n] != -1){
        return dp[n];
    }
    //recursive case
    return dp[n] = topdown(n-1,dp) + topdown(n-2,dp);

}
int bottomup(int n){
    int dp[0] = 0;
    int dp[1] = 1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2]; 
    }

    return dp[n];
}
int fibo(){
    //base case
    if(n == 0 || n == 1)
        return n;
    //recursive case
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    int dp[10000];
    for(int i=0;i<=n;i++){
        dp[i] = -1;
    }
    cout<<topdown(n,dp)<<endl;
    cout<<bottomup(n)<<endl;
    cout<<fibo(n)<<endl;


return 0;
}