#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[] = {3,4,4,6,76,83};
    int n=sizeof(a)/sizeof(int);
    int lar = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i] > lar){
            lar = a[i];
        }
    }
    cout<<lar<<endl;
    return 0;
    }