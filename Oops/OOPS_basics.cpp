#include<bits/stdc++.h>
using namespace std;
//////////////////////// BLUE PRINT ///////////////////////////

class Car{   // blueprint, doesn't occupy memory, object creation occupys memory
public:
    char name[100];
    int seats;
    int milage;
    int price;

    // DEFAULT CONSTURCTOR
    Car() {  ////// constructor creation , default constructor which have empty values inside it
        cout<<"creating objects using default constructor"<<endl;
    }

    // PARAMETRISED COSNSTURCTOR
    Car(char *n,int s,int m, int p) {
        cout<<" Inside parametrised consturctor"<<endl;
        strcpy(name,n);
        milage = m;
        seats = s;
        price = p;
    }
    
    Car(Car &X){     // ~OVERWRITED COPY CONSTRUCTOR
        cout<<" Inside copy consturctor "<<endl;
        strcpy(name,X.name);
        seats = X.seats;
        milage = X.milage;
        price = X.price;
    }
    void print(){                       /// function or method creation
        cout<<" name= "<<name<<endl;
        cout<<" seats= "<<seats<<endl;
        cout<<" milage= "<<milage<<endl;
        cout<<" price= "<<price<<endl;
    }
};
int main(){
Car A,B; // object

// method 1 of calling values in object
strcpy(A.name,"BMW"); 
A.seats = 4;
A.milage = 100;
A.price = 1000000;

strcpy(B.name,"audi");
B.seats = 5;
B.milage = 200;
B.price = 10000000;

cout<<"name = "<<A.name<<" seats= "<<A.seats<<" milage= "<<A.milage<<" price= "<<A.price<<endl;  
cout<<endl;
//method 2 of calling values in object using functions
A.print();
cout<<endl; 

B.print();
cout<<endl;

Car C("maruti",4,150,100000); // based on parametrised constructor
C.print();

cout<<endl;

Car D = C;    // COPY CONSTRUCTOR
D.print();
return 0;
}