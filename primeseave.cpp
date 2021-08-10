#include<bits/stdc++.h>
using namespace std;
void primesieve(bool *primes,int n){
    for(int i = 2,i <= n; i++){
        if(primes[i] != false){
            for(int j = 2 * i ;j <= n; j+= i){
                primes[j] = false;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;

    bool primes[100000];
    for(int i=0;i<=n;i++){
        primes[i] = true;
    }

    primesieve([primes , n]);
return 0;
}