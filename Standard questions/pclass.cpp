#include<bits/stdc++.h>
using namespace std;
class car{
public:
    char *name;
    int milage;
    int price;
    int engine;

    car(){    //default constructor
        name = NULL;
    }
    // car(int e,int p,int m,char *n){
    //     cout<<"this is the first constructor"<<endl<<endl;
    //     strcpy(name,n);
    //     milage = m;
    //     price = p;
    //     engine = e;
    // }

    car(char *n,int m,int p,int e){           // parameterised cosntructor
        name = new int char[strlen(n) + 1];
        strcpy(name,n);
        milage = m;
        price = p;
        engine = e;
    }

    void print(){
        cout<<"name   :"<<name<<endl;
        cout<<"milage :"<<milage<<endl;
        cout<<"price  :"<<price<<endl;
        cout<<"engine :"<<engine<<endl<<endl;
    }
};
int main(){
    car a("audi",20,12393,340);
    a.print();

    // car c(234,2254,23,"auto");
    // c.print();

    // car b("BMw",133,23984,9237);
    // b.print();

return 0;
}