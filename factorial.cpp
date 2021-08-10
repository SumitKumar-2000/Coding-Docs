#include<iostream>
using namespace std;

int fact(int no){
    int ans = 1;
    for(int i = 1; i<=no; i++){
        ans = ans*i;
    }
    return ans;
}
int ncr(int n, int r){
    int ans = fact(n)/((fact(r) * fact(n-r)));
}
int main(){
    int n;

    cout<< fact(5) <<endl;
    cout<< ncr(5,2)<<endl;

    return 0;
}