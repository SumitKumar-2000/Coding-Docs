#include<bits/stdc++.h>
using namespace std;
class Car{
public:
    int price;
public:
    char* name;
    int seats;
    const int tyres;
    static int count;
    Car() : tyres(4) {       // default constructor
        count++;
        name = NULL;
    }

    // setprice
    void setprice(int p){
        if(p > 1000 and p < 1500){
            price = p;
        }
        else{
            price = 1000;
        }
    }

    // getprice
    int getprice(){
        return price;
    }

    Car(char *n,int s,int p) : tyres(4){         // paremetrised constructor
        name = new char[strlen(n) + 1];
        strcpy(name,n);
        seats = s;
        price = p;
        count++;
    }

    Car(Car &X) : tyres(4)  {                // copy constructor
        name = new char[strlen(X.name) + 1];
        strcpy(name,X.name);
        seats = X.seats;
        price = X.price;
        count++;
    }
    void changename(char *n){    /// for elements made without using costructor
        // calling change name
        if(name != NULL){
            delete[] name; 
        }
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }

    void operator+=(Car X){     // operator overloading
        char *oldname = name;
        name = new char[strlen(name) + strlen(X.name) + 1];
        strcpy(name,oldname);
        strcat(name,X.name);
        seats += X.seats;
        price += X.price;   
        delete[] oldname;
    }

    void print() const{
        cout<<"name :"<<name<<endl;
        cout<<"seats :"<<seats<<endl;
        cout<<"price :"<<price<<endl;
        cout<<endl;
    }

    ~Car(){    // creating destructor ,, deletes the object of car one by one 
        cout<<"Deleting : "<<name<<endl;
        delete[] name;    // deleting dynamic memory created 
        count--;
    }
};