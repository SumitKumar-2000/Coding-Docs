#include<bits/stdc++.h>
using namespace std;
int subsetcount(int *a,int n,int key,int i,int count){
    //base case
        if(i == n){
            cout<<endl;    
            return count;
        }
    //recursive case
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(sum == key){
                for(int k = i;k<=j;k++){
                    cout<<a[k]<<" ";
                }
                cout<<" ";
                count++;
            }
        }
        return subsetcount(a,n,key,i+1,count);
}
int main(){
    int n,key;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;

    cout<<subsetcount(a,n,key,0,0);
    return 0;
}