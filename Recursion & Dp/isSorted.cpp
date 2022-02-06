#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *vec,int size){
    // base case
    if(size == 0 || size == 1) return true;
    if(vec[0] > vec[1]) return false;    

    // recursive case
    else{
        bool ans =  isSorted(vec+1,size-1);
        return ans;
    }
}

int main(){

    int vec[5] = {1,2,3,4,5};
    int size = 5;

    if(isSorted(vec,size)){
        cout<<"The array is sorted "<<endl;
    }
    else cout<<"The array is not sorted"<<endl;
    
    return 0;
}