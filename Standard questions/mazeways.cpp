#include<iostream>
using namespace std;
int mazeways(int i,int j){
    if(i == 0 && j == 0){
        return ;
    }
    if(i < 0 || j < 0){
        return 0;
    }

    return mazeways(i-1,j) + mazeways(i,j-1);

}
int main(){
    int i,j;
    cin>>i>>j;

    cout<<mazeways(i,j)<<endl;
return 0;
}