#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
  
for(int no =2;no<=n;no++){
  
bool isprime = true;
  for(int i=2;i<no;i++)
  {
      if(no%i==0){
          isprime = false;
          break;
      }     
  }
  if(isprime == true){
      cout<<no<<endl;
  }
}
return 0;
}