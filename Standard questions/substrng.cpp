#include<iostream>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,100);
    for(int i=0;a[i] != '\0';i++){
        for(int j=i;a[j]!='\0';j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
return 0;
}