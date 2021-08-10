#include<iostream>
using namespace std;

void subsequence(char *a,char *b,int i,int j){
    // base case
    if(a[i] == '\0'){
        b[j] = '\0';
        cout<<b<<endl;
        return;
    }
    // recursive case
    // ignoring the ith character 
    subsequence(a,b,i+1,j);
    
    // considering the ith character
    b[j] = a[i];
    subsequence(a,b,i+1,j+1);
}
int main(){
char a[]  = "abc";
char b[100];

subsequence(a,b,0,0);
return 0;
}