#include<bits/stdc++.h>
using namespace std;
class Stack {
    private:
        vector<int> v;
    public:
        void push(int d){
            v.push_back(d);
        }
        void pop(){
            v.pop_back();
        }
        bool empty(){
            return v.size() = 0 ? true : false;
        }
        int top(){
            return v[v.size()-1];
        }
}
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){
        cout<<top();
    }
return 0;
}