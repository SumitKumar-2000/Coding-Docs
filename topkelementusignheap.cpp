#include<bits/stdc++.h>
using namespace std;
void printqueue(print_queue<int,vector<int>, greater<int> q){
    while(!q.empty()){
        cout<<q.top()<<" ";
    }
    cout<<endl;
}
int main(){
    priority_queue<int , vector<int>, greater<int>> q;
    int k = 3, no;
    while(1){
        cin>>no;
        if(no == -1){
            // print the enitre heap
            printqueue(q);
        }
        else{
            if(q.size()<k){
                q.push(no);
            }
            else{
                if(q.top()<no){
                    q.pop();
                    q.push(no);
                }
            }
        }
    }

return 0;
}