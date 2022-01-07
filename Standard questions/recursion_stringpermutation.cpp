#include<iostream>
using namespace std;
void stringpermutation(char a[],int i){
    // base case
    if(a[i] =='\0'){
        for()
        return;
    }
    // recursive case
    for(int j=i;a[j] != '\0';j++){
        swap(a[i],a[j]);
        stringpermutation(a,i+1);
        swap(a[i],a[j]);     // concept of backtracking takes place
    }
}
int main(){
    char a[] = "abc";
    
    stringpermutation(a,0);
return 0;
}