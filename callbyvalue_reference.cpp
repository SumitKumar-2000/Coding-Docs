#include <iostream>
using namespace std;
void update(int &a){
a = a+1;
}   
int main() {
int x=10;
cout<<"before update: "<<x<<endl;
update(x);
cout<<"after update: "<<x<<endl;
return 0;
}