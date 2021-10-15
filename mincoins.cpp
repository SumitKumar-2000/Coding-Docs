#include<bits/stdc++.h>
using namespace std;
int Mincoins(int *deno,int m,int n){
    //base case
    if(n == 0){
        return 0;
    }
    int ans = INT_MAX;  
    //recursive case
    for(int i=0;i<m;i++){
        int sikka = deno[i];
        if(n-sikka >= 0){
            int chotiamt = n-sikka;
            int chotiamtkesikke = Mincoins(deno,m,chotiamt);
            if(chotiamtkesikke != INT_MAX){
                ans = min(ans,chotiamt + 1);
            }
        }
    }
    return dp[n]
}
int main(){
    int deno[] = {}
return 0;
}