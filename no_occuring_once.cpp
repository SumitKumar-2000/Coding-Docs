// this question will be with the use off XOR operation
// this does't work when , there are more than 1 single no.
#include<iostream>
using namespace std;
int main(){
    int n,no,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>no;
        ans = ans ^ no ;
    }
    cout<<ans<<endl;
    return 0;
}