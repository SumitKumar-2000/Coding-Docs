#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){  //important condition
        int mid = s+e/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1; //can't return 0 because 0 is a valid index in the array
}
int main(){
int a[] = {1,4,5,8,9,10};
int n = sizeof(a)/sizeof(int);
int key;
cin>>key;
int ans = binarysearch(a,n,key);
if(ans != -1){
    cout<<"key found at :"<<ans;
}
else {
    cout<<"key not found";
}

return 0;
}