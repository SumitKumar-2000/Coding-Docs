#include<bits/stdc++.h>
using namespace std;
int combinations(int arr[], int n,int index, int currsum,string ans,int target){
    //base case
    if(index == n){
        if(target == cursum){
            cout<<ans<<" ";
            return 1;
        }
        return 0;
    }
    int count = 0;
    //recursive case
    
    //include
    count+= combinations(arr,n,index+1,currsum+arr[index],ans + to_string(arr[index]) + " ");

    //excluding
    count += combinations(arr,n,index+1,currsum,ans,target);

    return count;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int target;
cin>>target;
int res = combinations(arr,n,0,0,"", target);
return 0;
}