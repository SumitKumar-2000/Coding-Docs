#include<iostream>
using namespace std;
bool check7(int a[],int n){
    if(n == 0)
        return false;
    
    if(a[0] == 7){
        return true;
    }
    
    bool ans  = check7(a+1,n-1);
    return ans;
}
int first7(int a[],int n,int i){
    if(i == n)
        return -1;
    int ans = first7(a,n,i+1);
    return ans;
}

int first_7(int a[],int n){
    if(n == 0)
        return -1;
    int ans  = first_7(a+1,n-1);
    if(ans == -1)
        return -1;
    else   
        return ans;
}

int main(){
    int a[] = {1, 4, 3, 4, 2, 6};
    int n = sizeof(a)/sizeof(int);

    if(check7(a,n)){
        cout<<" hai 7"<<enld;
    }
    else{
        cout<<"nahi hai 7"<<enld;
    }
    cout<<"first7"<<first7(a,n,i)<<endl;
    cout<<"first_7"<<first_7

return 0;
}