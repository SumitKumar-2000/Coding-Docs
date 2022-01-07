#include<bits/stdc++.h>
using namespace std;
class Student{

public:
    char *name;
    int cls;
    int rno;
    char *section;

    Student(char *n,int c,int r,char *s){   //parametrised constructor
        name = new char[strlen(n) + 1];
        section = new char[strlen(s) + 1];
        strcpy(name,n);
        cls = c;
        rno = r;
        strcpy(section,s);
    }
    student(){
        cout<<"default cosntructor -->> ";
        name = NULL;
        section = NULL;
    }
    Student(Student &X){
        cout<<"copying matter of A in B  -->> "<<endl;
        name = new char[strlen(X.name) + 1];
        section = new char[strlen(X.section) + 1];
        strcpy(name,X.name);
        cls = X.cls;
        rno = X.rno;
        strcpy(section,X.section);
    }

    // void change(char *n,char *s){
    //     if(name != NULL || section != NULL){
    //         delete []name;
    //         name = NULL; 

    //         delete []section;
    //         section = NULL;
    //     }
    //     name = new char[strlen(n)+1];
    //     strcpy(name,n);

    //     section = new char[strlen(s)+1];
    //     strcpy(section,s);
    // }

    void print(){   //print function
        cout<<"name    : "<<name<<endl;
        cout<<"class   : "<<cls<<endl;
        cout<<"roll no : "<<rno<<endl;
        cout<<"section : "<<section<<endl<<endl;
    }
    

    
};

int main(){
    // Student O; 
    // O.change("smile");
    // O.cls = 10;
    // O.rno = 

    Student A("audi",11,1,"D-section");
    A.print();

    Student B(A);   //calling copy constructor
    B.print();

    Student C(B);
    C.print();


return 0;
} 