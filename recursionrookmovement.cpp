#include<iostream>
using namespace std;
int noofways(int i,int j){
    //base case
    if(i == 0 && j == 0){
        return 1;
    }

    //recursive case
    int ans = 0;
    for(int k=0;k <= j-1;k++){
        ans += noofways(i,k);
    }

    for(int k=0;k <= i-1;k++){
        ans += noofways(k,j);
    }

    return ans;
}
int main(){
    int i,j;
    cin>>i>>j;
    cout<<noofways(i,j)<<endl;
return 0;
}