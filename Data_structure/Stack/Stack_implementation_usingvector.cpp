#include<iostream>
#include<vector>
using namespace std;
class Stack{
private:
    vector<int> v;                        // vector is made private so that no changes would able to take place inside vector
public:
    void push(int d){
        v.push_back(d);
    }
    void pop(){
        v.pop_back();
    }
    bool empty(){
        // if(v.empty()){
        //     return true;
        // }
        // else return false;

        // also
        return v.size() == 0;               // return true ( if 0 == 0 ) and return false ( if 1 == 0)
    }
    int top(){
        return v[v.size()-1];
    }
};
int main(){
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);

    while(!S.empty()){
        cout<<S.top()<<endl;
        S.pop();
    }

    return 0;
}