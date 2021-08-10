#include<iostream>
using namespace std;
int main(){
     int a[3][3] = {{1,2,3},{5,6,7},{8,9,10}};
     char ch[][5] = {"aman","tom","mom"};
     for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
                cout<<a[r][c]<<" ";
        } 
        cout<<endl;
     }
    cout<<endl;
     for(int r=0;r<3;r++){
         for(int c=0;c != '\0';c++){
             cout<<ch[r][c]<<" ";
         }
         cout<<endl;
     }
    return 0;
}