#include<iostream>
using namespace std;
int length(char *ch){
    int i;
    for(i=0;i!='\0';i++){

    }
    return i;
}
void reverse(char *ch){
    int len = length(ch);
    int i=0,j= len-1;
    while(i<j){
        swap(ch[i],ch[j]);
        for(int i=0;ch[i] != '\0';i++){
            cout<<ch[i];
        }
    }
    
}
int main(){
    char a[100] ;
    cin.getline(a,100);
    length(a);
    cout<<a<<endl;
    reverse(a);
    return 0;
}