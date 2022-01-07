#include<iostream>
#include<list>
using namespace std;
ostream& operator<<(ostream& os, list<int> &l){
    for(auto x: l){
        cout<<x<<"-->";
    }
    return os;
}
int main(){
    // creating list
    list <int> l;
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(5);
    l.push_back(6);
    l.push_front(7);
    //linkedlist initiallization
    // list<int> l {1,2,3,4};

    //printing using for each loop
    // for(auto x:l){
    //     cout<<x<<"-->";
    // }
    // cout<<"NULL"<<endl;

    // l.reverse();

    // for(auto it = l.begin();it != l.end();it++){
    //     cout<<*it<<"-->";
    // }
    // cout<<"NULL"<<endl;

    // //insert at some position pos
    list<int>::iterator it,it1; // creationg iterator
    it = l.begin();
    it1 = l.begin();
    // // it++;
    // // it++; 
    advance(it1,3);
    l.erase(it,it1);
    // for(auto x:l){
        // cout<<x<<"-->";
    // }
    // l.sort();
    cout<<l<<endl;
return 0;
}