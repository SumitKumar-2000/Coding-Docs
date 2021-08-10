#include <bits/stdc++.h>
using namespace std;
int *fun(int n)
{
    int *a = new int[n];
    int no = 1;
    for(int i=0;i<n;i++){
        a[i] = no;
        no ++;

    }
    return a;
}
int main()
{
    int n;
    cin>>n;

    int *a = fun(n);

    for(int i = 0;i<n;i++){
        cout<<a[i];
    }
    delete []a;
    a = NULL;
    return 0;
}
