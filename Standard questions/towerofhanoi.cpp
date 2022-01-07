#include<iostream>
using namespace std;
void toh(int n,char source,char helper,char destination){
    //basecase
    if(n==0)
        return;
    //recursive case
    //1. take all disk from src to helper
    toh(n-1,source, destination ,helper);
    cout<<" taking disk "<<n<<" from "<<source<<" to "<<destination<<endl;

    //3. helper se n-1 disk utha kar destination par rakh de

    toh(n-1,helper,source,destination);

}
int main(){
int n;
cin>>n;
toh(n,'A','B','c');
return 0;
}

