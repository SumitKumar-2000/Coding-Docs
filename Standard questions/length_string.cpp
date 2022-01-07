#include<iostream>
using namespace std;
int length(char *a){
    int i;
    for(i=0;a[i]!='\0';i++){

    }
    return i;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<length(ch);
    return 0;
}