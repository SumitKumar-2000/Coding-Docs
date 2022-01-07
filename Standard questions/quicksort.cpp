#include<bits/stdc++.h>
using namespace std;
int createpartition(int *a,int s,int e){
    int i = s-1;
    for(int j=s;j<=e-1;j++){
        if(a[e] >= a[j]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);

    return i+1;  // pivot placement , partition happens here
}
void qsort(int *a,int s,int e){
    //base case
    if(s>=e){
        return ;
    }
    //recursive case
    int p = createpartition(a,s,e);
    qsort(a,s,p-1);
    qsort(a,p+1,e);

}
int main(){
int n;
cin>>n;

int a[100];
for(int i=0;i<n;i++){
    cin>>a[i];
}
qsort(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}