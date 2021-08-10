#include<iostream>
using namespace std;
int main(){
   int n,val;
   cin>>n;
   for(int row = 1;row<=n;row++)
   {
       if(row%2==0){
           val = 0;
       }
       else{
           val = 1;
       }
       for(int i=1;i<=row;i++)
       {
           cout<<val;
           val = 1-val;
       }
       cout<<endl;
   }
return 0;    
}