#include<iostream>
using namespace std;
int main(){
    int initial_val,final_val,steps;
    int c,f;
    cin>>initial_val>>final_val>>steps;
    while(initial_val <= final_val){
        f = initial_val;
        
        c= (5.0/9.0)*(f-32);
        cout<<f<<" "<<c<<endl;

        initial_val = initial_val + steps;
    }

return 0;   
}