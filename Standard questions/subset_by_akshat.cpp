#include<bits/stdc++.h>
using namespace std;

int subsetcount(int *a, int n, int target, vector<int> subset, vector<vector<int>> &allsubsets){
    if (n == 0) {
        if (target == 0){
            reverse(subset.begin(), subset.end());
            allsubsets.push_back(subset);
            return 1;
        }
        else
            return 0;
    }
    
    if(target >= a[n-1]){
        int ans1 = subsetcount(a, n-1, target, subset, allsubsets);
        subset.push_back(a[n-1]);
        int ans2 = subsetcount(a, n-1, target - a[n-1], subset, allsubsets);
        return ans1 + ans2;
    }
    return subsetcount(a, n-1, target, subset, allsubsets);
}


int main(){
    int n,key;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    vector<vector<int>> allsubsets;
    int count = subsetcount(a,n,key, {}, allsubsets);
   for(auto subset:allsubsets){
       for(int i:subset)
            cout<<i<<" ";
        cout<<" ";
   }
    cout<<endl;
    cout<<count;
    return 0;
}