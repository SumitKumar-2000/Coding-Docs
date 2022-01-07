#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty()) {   // while s is not empty 
		cout << s.top() << endl; // s.top gives the top element of the stack
		s.pop();   // pops the top element of the stack
	}

return 0;
}