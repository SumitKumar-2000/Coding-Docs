#include<iostream>
#include<list>                           //header file used for doubly linked list stl (takes more memory)
//#inlude<forward_list>                  //header file used for singly linked list stl (takes less memory) 
using namespace std;

// instead of entering the long same code for printing linked we can overload " << " opertor using overloading method
ostream& operator<<(ostream& os, list<int> &l){
    for(auto x:l){
        cout<<x<<"-->";
    }
    cout<<"NULL"<<endl;
    return os;
}

int main(){
    // create a linked list
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(2);
    l.push_front(2);
    l.push_front(2);
    l.push_front(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_front(7);

    // print the linked list

    // using for each loop
    for(auto e:l){                          // for every element 'e' present inside linked list 'l'
        cout<<e<<"-->";
    }
    cout<<"NULL"<<endl;

    //linked list reverse
    l.reverse();

    // printing linked list using iterator
    for(auto it = l.begin(); it != l.end(); it++){
        cout<<*it<<"-->";
    }
    cout<<"NULL"<<endl;

    //insertion in linked list
    list<int>::iterator it;
    it = l.begin();  

    int pos = 2;                            // lets say user has given the position 2 to insert a value
    for(int i=0;i<pos;i++){                 // moving linked list iterator to 2nd position
        it++;
    }
    
    l.insert(it,9);
    cout<<l<<endl;                          // printing using overloading concept

    //deleting or erasing any value of linked list 
    int key = 2;
    for(auto it = l.begin(); it != l.end(); it++){
        if(*it == key){
            l.erase(it);
            break;
        }
    }
    cout<<l<<endl;

    l.pop_back();                            // delete last node
    l.pop_front();                           // delete front node
    cout<<l<<endl;

    //Removing all the values of same kind using remove()
    l.remove(2);                             // will remove all the 2's from linked list
    cout<<l<<endl;

    return 0;
}