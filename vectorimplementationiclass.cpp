#include<bits/stdc++.h>
using namespace std;
class Vector{
template <typename T>
public:
    T *arr;
    int cs;
    int ms;

    vector(int s = 2){
        cs = 0;
        ms = s;
        arr = new T[ms];
    }

    void push_back(T data){
        if(cs == ms){
            int *oldarr = arr;
            int oldms = ms;
            arr = new T[2*ms];
            ms = 2*ms;

            for(int i = 0;i<oldms;i++){
                arr[i] = oldarr[i];
            }
            delete []oldarr;
        }
        arr[cs] = data;
        cs++;
    }

    void pop_back(){
        if(cs>0){
            cs--;
        }
    }
    int size(){
        return cs;
    }
    int capacity(){
        return ms;
    }
    T operator[](int i){
        return a[i];
    }
};
int main(){
    Vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"capacity: "<<v.capacity() <<endl;
    cout<<"size: "<<v.size() <<endl;

return 0;
}