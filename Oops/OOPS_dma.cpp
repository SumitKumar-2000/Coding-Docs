#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    char *name;
    int standard;

    Student(){
        name = NULL;
    }
    Student(char *n,int s){
        cout<<"--calling parametrised constructor--"<<endl;
        name = new char[strlen(n)+1];
        strcpy(name,n);
        standard = s;
    }

    Student(Student &X){    /// copy constructor
        cout<<"--calling copy constructor--"<<endl;
        name = new char[strlen(X.name)+1];
        strcpy(name,X.name);
        standard = X.standard;
    }

    // copy assignment operator, D = C ,, here we are not creating D only updting it
    // specific syntax : retrntype operator(keyword) 
    void operator=(Student X){
        if(name != NULL){
            delete[] name;
            name = NULL;
        }
        cout<<"--calling copy assignment operator--"<<endl;
        name = new char[strlen(X.name)+1];
        strcpy(name,X.name);
        standard = X.standard;
    }

    void operator+=(Student X){

        char *oldname = name;
        // if(name != NULL){
        //     delete[] name;
        //     name = NULL;
        // }
        name = new char[strlen(name) + strlen(X.name) + 1];
        strcpy(name,oldname);
        strcat(name,X.name);

        standard += X.standard;
    }

    void ChangeName(char *n){
        cout<<"--calling change name--"<<endl;
        if(name != NULL){
            delete []name;
            name = NULL;
        }
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }

    void print(){
        cout<<"name : "<<name<<endl;
        cout<<"standard : "<<standard<<endl;
        cout<<endl;
    }
};

int main(){

Student A("sumit",6);  /// calling parametrised constructor
A.print();

Student B;          /// calling default constructor
B.ChangeName("Ajay");
B.standard = 10;
B.print();

Student C(A);
C.name[0] = 'O';
C.print();

// calling assignment operator
Student D;
D = C;      // calling copy assignment operator
D.print();
D+=C;
D.print();
return 0;
}