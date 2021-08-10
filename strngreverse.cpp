#include<iostream>
using namespace std;
int length(char *a){
    int i;
    for(i = 0;a[i] != '\0';i++){}
    return i;
}
void reverse(char *a){
    int len  = length(a);
    int i=0,j = len-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;j--;
    }
}
int main(){
    char a[100];
    cin.getline(a,100);
    cout<<"non reverse :"<<a<<endl;
    reverse(a);
    cout<<"reverse : "<<a;
    return 0;
}