// #define --> used to define/create macro
// macro --> a piece of code in a program that is replaced by value of macro

#include<bits/stdc++.h>
using namespace std;

// creating macro, macros doesn't take extra storage
#define PI 3.14   

// defining global variable
int var = 12;  

// compiler consider a function as inline function if it has 1 or 2 lines of code
inline int getMax(int a, int b){      
    return (a>b) ? a : b;
}

// setting start as default argument, if not given by the user start will initialize with 0
void print(int arr[],int start = 0){  
    for(int i=start;i<5;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    // 1. macros    
    int r = 5;

    // Befor compilation, PI will get replaced by 3.14 that is defined as macro
    double area = PI * r * r;
    cout<<"Area is " <<area <<endl;

    // 2. Global variable
    cout<<"defined global variable : "<< var <<endl;

    // 3. calling inline functions --> while execution getMax() will replace by return (a>b) ? a : b; thus performance will increse but not valid for function having more than 2 or 3 lines with in its body
    int ans = getMax(2,3);

    // 4. Default Arguments
    int arr[5] = {1,2,3,4,5};
    print(arr);

    
    return 0;
}