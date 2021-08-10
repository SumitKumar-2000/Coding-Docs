#include<iostream>
using namespace std;
int main(){
    int n;
    char ch[100];
    cin>>n;
    cin.ignore();  // it is important to add cin.ignore() so that white space can not be accessed;
    cin.getline(ch,100);

    cout<<n<<endl;
    cout<<ch<<endl;
    return 0;
}