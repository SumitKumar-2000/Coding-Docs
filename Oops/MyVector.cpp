// creating vecor class 

#include<bits/stdc++.h>
using namespace std;
template<typename T>    /// for each class one tempelate is created
class Vector{
public:
    T *arr;
    int cs;   // current size
    int ms;   // maximum size  
    // constructor
    Vector(int s = 2){    // initially setting size to 2
        cs = 0;
        ms = s;
        arr = new T[ms];
    }
    // pushback()
    void Push_back(T data){
        arr[cs] = data;
        cs++;
        if(cs == ms){
            T *oldarr = arr;
            int oldms = ms;
            arr = new T[2*ms];
            ms = 2*ms;
            for(int i=0;i<oldms;i++){
                arr[i] = oldarr[i];
            }
            delete[] oldarr;
        }
    }
    // popback()
    void Pop_back(){
        if(cs>0){
            cs--;   
        }
    }
    // size()
    int size(){
        return cs;
    }
    // capacity()
    int capacity(){
        return ms;
    }
    // operator overloading - v[i];
    T operator[](int i){
        return arr[i];
    }
};
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