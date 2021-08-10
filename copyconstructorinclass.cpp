#include<bits/stdc++.h>
using namespace std;
class car{
    public:

    // char name[100]; // it would occupy large space for small characters thus it is required to make pointer 
    char *name; 
    int model;
    int seats;
    car(){
        cout<<"defaust cosntructor : ";
        name = NULL; // if creating pointer to achieve dma , create null inside default constructor
    }
    car(char *n,int m,int s){ // for dma it is required to allocate the space , nd that is done inside the cosntructor
        name = new char[strlen(n)+1];
        strcpy(name,n);
        model = m;
        seats = s;


        // name = NULL;
    }

    car(car &x){
        cout<<"Inside self made copy constructor"<<endl;
        name = new char[strlen(x.name)+1];
        strcpy(name,x.name);
        model = x.model;
        seats = x.seats;
    }

    // void changename(char *n){
    //     if(name != NULL){
    //         delete []name;
    //         name = NULL; 
    //     }
    //     name = new char[srtlen(n)+1];
    //     strcpy(name,n);
    // }

    void print(){
        cout<<"name : "<<name<<endl;     
        cout<<"model : "<<model<<endl;     
        cout<<"seats : "<<seats<<endl<<endl;     
    }
};
int main(){
    car A("audi",4645,5464);
    A.print();

    car B = A;  /// this cause copy constructor ,, ist way of implementing copy constructor ,, DEFAULT CONSTRUCTOR
    B.print();

    car C(A); /// second way of implementiog the copy constructor ,, DEFAULT CONSTRUCTOR
    C.print();
return 0;
}