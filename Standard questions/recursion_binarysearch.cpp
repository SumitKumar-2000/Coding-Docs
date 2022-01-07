#include<iostream>
using namespace std;
int binarysearch(int *a,int s,int e,int key){
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    if(a[mid] == key){
        return mid;
    }
    else if(a[mid]<key){
        return binarysearch(a,mid+1,e,key);
    }
    else if(a[mid]<key){
        return binarysearch(a,s,mid-1,key);
    }
    
}
int main(){
    int a[] = {1,4,5,8,9,10};
    int n = sizeof(a)/sizeof(int);

    int ans = binarysearch(a,0,n-1,60);
    if(ans == -1){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"key found at: "<<ans<<endl;
    }
return 0;
}