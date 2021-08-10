#include<iostream>
using namespace std;
int main(){
    int m = 1;
    int a,count = 0;
     cin >>a;
     while(a){
         if((a&m)==1){
             count ++;
         }
         a = a >> 1;  // right shift by one
     }
     cout<<"set bits : "<< count<<endl;
     return 0;
}