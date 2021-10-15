#include<bits/stdc++.h>
using namespace std;
void permute(string ip,int i,set<string> &s){
    if(ip[i] == '\0'){
        s.insert(ip);
        return;
    }

    for(int j=i; ip[j]!='\0';j++){
        swap(ip[i],ip[j]);
        permute(ip,i+1,s);
        swap(ip[i],ip[j]);
    }
}
int main(){
string ip;
cin>>ip;
set<string> s;
permute(ip,0,s);

for(auto x:s){
    if(ip < x){
        cout<<x<<endl;
    }
}
return 0;
}