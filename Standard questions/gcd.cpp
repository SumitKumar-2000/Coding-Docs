#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b % a == 0)
        return a;

    int x = b % a;
    return gcd(x,a);
    
}

int main(){
    int a,b;
    cin>>a>>b;
    if(a < b)
    cout<<gcd(a,b);
    else 
    cout<<gcd(b,a);

}