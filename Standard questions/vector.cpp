#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a;
    vector <int> v;
    vector <int> v1;
    for (int i = 0; i < v.size(); i++)
    {   
        cin>>a;
        v.push_back(a);
    }
    cout<<"pushing"<<endl;
    for (int j = 0; j < v.size(); j++)
    {   
        v1.push_back(v[j]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    
    }
    return 0;
}