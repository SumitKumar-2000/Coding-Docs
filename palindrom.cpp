#include<iostream>
using namespace std;
int length(char *a){
    int i;
    for(i=0;a[i] != '\0';i++){

    }
    return i;
}
bool ispalindrom(char *a){
    int len = length(a);
        int i=0,j=len-1;
        while(i<j){
            if(a[i] != a[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);

    if(ispalindrom(ch) == true)
        cout<<"palidrom"<<endl;
    else
        cout<<"not a palindrom"<<endl;
    return 0;
}