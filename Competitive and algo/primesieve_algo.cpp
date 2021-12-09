#include<bits/stdc++.h>
using namespace std;

void primesieve(vector<int> &primes,int n){
    for(int i=2;i<=n;i++){
        if(primes[i]!=0){
            for(int j=2*i;j<=n;j+=i){
                primes[j] = 0;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(primes[i] == 1)
            cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> primes(n,1);
    
    primesieve(primes,n);
    return 0;
}