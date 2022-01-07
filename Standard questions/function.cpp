#include<iostream>
using namespace std;
    void helloworld(){
        cout<<"hello world";
    }
    void printsum(int a,int b){
        cout<<"sum:"<<a+b<<endl;
    }
int main(){
    int a,b;
    cin>>a>>b;
    printsum(a,b);

    return 0;
}