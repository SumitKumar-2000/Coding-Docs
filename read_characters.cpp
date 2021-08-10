#include<iostream>
using namespace std;
int main(){
    int spaces = 0;
    int alphabets = 0;
    int digits = 0;
    int others = 0;
    char ch ;
    ch = cin.get();
     while (ch != '$')
     {
         if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
             alphabets++;
         }
         if(ch>=0 && ch<=9 ){
             digits++;
         }
         if(ch==' ' || ch=='\n' || ch=='\t' ){
             spaces++;
         }
         else{
             others++;
         }
        ch = cin.get();
     }

     cout<<"alphabets:"<<alphabets;
     cout<<"spaces:"<<spaces;
     cout<<"digits:"<<digits;
     cout<<"alphabets:"<<others;
return 0;
}