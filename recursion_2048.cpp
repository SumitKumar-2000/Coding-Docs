#include<iostream>
using namespace std;

char arr[][10] = {
    "zero","one","two","three","four","five","six","seven","eight","nine"
};
void integertostring(int no){
    if(no == 0){
        return;
    }

    integertostring(no/10);
    
    int digit = no%10;
    cout<<arr[digit] <<" ";
}
int main(){
    integertostring(2048);
    cout<<endl;
    integertostring(2148);
    cout<<endl;
    
return 0;
}