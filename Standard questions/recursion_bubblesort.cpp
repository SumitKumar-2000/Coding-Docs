#include<iostream>
using namespace std;
void bubblesort(int a[],int n,int i){
    //base case
    if(i == n-1)
        return;
    // recursive case
    for(int j=0;j<n-i-1;j++){
        if(a[j] > a[j+1])
            swap(a[i],a[j+1]);
    }

    bubblesort(a,n,i+1);        
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n,0);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
return 0;
}