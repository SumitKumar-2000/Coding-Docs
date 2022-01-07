#include<iostream>
using namespace std;
int main(){
int no;
cin>>no;
for(int i=2;i<no;i++)
{
    if(no%i==0){
        cout<<"notprime"<<endl;
        return 0;
    }
}
cout<<"prime"<<endl;
return 0;
}