#include<iostream>
using namespace std;
int main(){
    int n,no;
    cin>>n;
    for(int row = 1;row<n;row++){
        for(int spaces = 1;spaces<=(n-row);spaces++){
            cout<<'\t';
        }

        no=row;
        for(int i=1;i<=row;i++)
        {
            cout<<no<<"\t";
            no = no+1;
        }
        no = no-2;
        for(int i=1;i<=row-1;i++){
            cout<<no<<"\t";
            no = no-1;
        }
        cout<<"\n";
    }
    return 0;
}