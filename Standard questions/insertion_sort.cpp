#include<iostream>
using namespace std;
int main(){
    int a[] = {45,8,46,6,4,3,79};
    int n = sizeof(a)/sizeof(int);
    int i,j;
    for(i=1;i<n;i++){
        int temp = a[i];
        // for(j=i-1;j>=0;j--){
        //     if(a[j]>temp){
        //         a[j+1] = a[j];
        //     }
        //     else    
        //         break;

        // }
        for(j=i-1;j>=0 && a[j]>temp;j--){  // another way
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }  
  return 0;
}