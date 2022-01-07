#include<bits/stdc++.h>
using namespace std;
int boardpath(int currsum,int n,int faces,string ans){
    if(currsum){
        cout<<ans<<" ";
        return 1;
    }
    int count = 0;
    for(int dice = 1;dice<=faces && currsum + dice <= n;dice++){
        cout+=boardpath(currsum+dice,n,faces,ans+to_string(dice));
    }
    return count;
}
int main(){
    int n, faces;
    cin>>n>>faces;
    int ans = boardpath(0,n,faces, "");
    cout<<endl;
    cout<<ans;

return 0;
}