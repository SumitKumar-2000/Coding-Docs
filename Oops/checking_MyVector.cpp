#include<iostream>
#include"MyVector.h"
using namespace std;
int main(){
    
    Vector<int> v;     /// <int>  --- this portion of code in based upon the tempelate created
    v.Push_back(1);
    v.Push_back(2);
    v.Push_back(3);
    v.Push_back(4);
    v.Push_back(5);
    v.Pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"capacity :"<<v.capacity()<<endl;
    cout<<"size :"<<v.size()<<endl;

    return 0;
}