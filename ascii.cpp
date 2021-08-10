#include<iostream>
using namespace std;
int main()
{
    char ch ;
    cin>>ch;
    
    // cin>>ch;
    // int b = ch;

    // cout<<b<<endl;
    // if(b>=65 && b<=90){                //<------method 1
    //     cout<<"uppercase"<<endl;
    // }
    // else{
    //     cout<<"lower case"<<endl;
    // }

    if(ch>='A' && ch<='Z')                //<---------mehod 2
    {
        cout<<"uppercase"<<endl;
    }
    else{
        cout<<"lower case"<<endl;
    }

return 0;    
}
