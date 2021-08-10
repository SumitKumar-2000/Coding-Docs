#include<iostream>
using namespace std;
bool checkno(int a[],int n,int key){
    if(n == 0)
        return false;
    
    if(a[0] == key)
        return true;
    else 
        return checkno(a+1,n-1,key);
}
int firstindex(int a[],int n,int key,int i){
    if(i == n)
        return -1;
    
    if(a[i] == key)
        return i;
    else 
        return firstindex(a,n,key,i+1);
}
int lastindex(int a[],int n,int key,int i){
    if(i==0)
        return -1;
    if(a[i] == key)
        return i;
    else
        return lastindex(a,n,key,i-1);
}

void all_no(int a[],int n,int key,int i){
     if(i == n)
        return;
    
     if(a[i] == key)
        cout<<i<<" ";
     else
        all_no(a,n,key,i+1);

}
int main(){
int n,key;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>key;
if(checkno(a,n,key) == true){
    cout<<"number found"<<endl;
}
else cout<<"number not found"<<endl;

int i;
cout<<"number from start found at index: "<<firstindex(a,n,key,0)<<endl;
cout<<"number from last found at index: "<<lastindex(a,n,key,n-1)<<endl;

cout<<"all no at :";
all_no(a,n,key,0);
return 0;
}