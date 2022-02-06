#include<bits/stdc++.h>
using namespace std;
int getSum(int *arr,int size){
    if(size == 0) return 0;
    else if(size == 1) return arr[0];
    else{
        int sum = arr[0] + getSum(arr+1,size-1); 
    }
}
int main(){
    
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;

    cout<<"The sum is : "<<getSum(arr,size);
    return 0;
}