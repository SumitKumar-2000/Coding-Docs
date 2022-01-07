#include<bits/stdc++.h>
using namespace std;
int * createarray(int n){
    int *a = new int[n];
    int no = 1;
    for(int i=0;i<n;i++){
        a[i] = no;
        no += 2;
    }
}
int main(){
    int n;
    cin>>n;
    int *arr = createarray(n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
return 0;
}