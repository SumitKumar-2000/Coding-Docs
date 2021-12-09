#include<bits/stdc++.h>
using namespace std;
class Car{
public:
    char *name;
    int price;
    int milage;

    Car(){
        name = NULL;
    }
    Car(char* n,int p,int m){                /// constructor
          name = new char[strlen(n) + 1];
          strcpy(name,n);
          price = p;
          milage = m;
    }

    Car(Car &X ){    /// parametrised copy consturctor
        name = new char(strlen(X.name) + 1));
        strcpy(name,X.name);
        price = X.price;
        milage = X.milage;
    }

    void print(){
        cout<<"Name :"<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Milage : "<<milage<<endl;
    }

    void changeName(char *n){
        if(name != NULL){
            delete []name;
            name = NULL;
        }
        name = new char[strlen(n) + 1];
        strcpy(name,n);
        
    }
};
int main(){
Car A("BMW",1000,100);   /// calling parametrised constructor
A.print();

cout<<endl;

Car B;              //// calling default constructor 
// strcpy(B.name,"Royal");    the default constructor has null inside it thus doesn't excute this statement,, name = NULL
B.changeName("royal");    ///thus creating another function for naming purpose
B.price = 200;
B.milage = 100000;

B.print();

cout<<endl;

Car C(A);    /// copy constructor
A.print();


return 0;
}