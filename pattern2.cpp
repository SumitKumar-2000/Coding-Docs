#include<iostream>
using namespace std;
int main(){
    int n,no=1;
    cin>>n;
    for(int row=1; row<=n; row++)
    {
        for(int i=1;i<=row;i++)
        {
            // no = row;
            cout<<no;
            no++;
        }
        cout<<endl;
    }
    return 0;
}