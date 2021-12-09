#include<iostream>
#include<stack>             //header file to include stack
using namespace std;

int main(){

    // creating stack
    stack<int> s;           //creating stack
    s.push(1);              //inserting element on the top using push() function
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    // In stack we can only access top element that's why after printing remving top element using pop() function to access below elements

    return 0;
}