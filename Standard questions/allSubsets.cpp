#include<bits/stdc++.h>
using namespace std;

void subsetcount(int *a, int n, vector<int> subset, vector<vector<int>> &allsubsets){
    if (n == 0) {
        allsubsets.push_back(subset);
        return;
    } 
        subsetcount(a, n-1, subset, allsubsets);
        subset.push_back(a[n-1]);
        subsetcount(a, n-1, subset, allsubsets);
}


int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<vector<int>> allsubsets;
    subsetcount(a,n,{}, allsubsets);
   for(auto subset:allsubsets){
       for(int i:subset)
            cout<<i<<" ";
        cout<<endl;
   }
    cout<<endl;
   
    return 0;
}