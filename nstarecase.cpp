#include<iostream>
using namespace std;
int stairs(int n,int k){
    if(n == 0)
        return 1;
    if(n<0)
        return 0;

    //recursive case 
    int sum = 0;

    for(int i=1;i<=k;i++){
    sum += stairs(n-i,k);
    }

    return sum;
}
int main(){
int n,k;
cin>>n>>k;

cout<<stairs(n,k)<<endl;
return 0;
}