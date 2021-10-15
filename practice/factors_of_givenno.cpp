#include<iostream>
using namespace std;
int main(){
    //finding out factors of a given no.
    int n;
    cout<<"enter the no. :";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cout<<"factor of "<<n<<" = "<<i<<endl;
        }
    }
}