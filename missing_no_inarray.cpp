#include<iostream>
using namespace std;
int main(){
    int a[] = {1,3,4,5,6};
    int n= sizeof(a)/sizeof(int);
    int actuallsum = n*(n-1)/2, sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    cout<<"missing no"<< actuallsum - sum<<endl;;

    // another way
    int ans = 0;
    for(int i=0;i<n;i++){
        ans ^= a[i];
    }
    for(int i=0;i<=n;i++){
        ans ^= i;
    }
    cout<<"missing element once again : "<<ans<<endl;
return 0;
}