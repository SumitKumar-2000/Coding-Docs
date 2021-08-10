#include<iostream>
using namespace std;
bool mirrorinverse(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[a[i]] != i){
            return false;
        }
    }
    return true;

}
int main(){
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(mirrorinverse(a,n)){
        cout<<"yes";
    }
    else false;
    return 0;
}