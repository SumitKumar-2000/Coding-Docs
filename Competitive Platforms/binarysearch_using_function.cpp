#include<iostream>
using namespace std;
int binary_search(int a[],int k,int n){
    int s = 0,e = n-1;
    while(s<=e){
        int mid = (s+e) / 2;
        if(k == a[mid]){
            return mid;
        }
        else if(k > a[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}
int main(){
int a[] = {1,2,3,4,5,6,7,8,9};
int n = sizeof(a)/sizeof(int);
int k;
cin>>k;

int ans = binary_search(a,k,n);
if(ans != -1){
    cout<<"found at : "<<ans<<endl;
}
else{
    cout<<"not found : ";
}
return 0;
}