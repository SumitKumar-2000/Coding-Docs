#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the no. of elements: ";
cin>>n;
vector<int> socks(n);
for(int i=0;i<n;i++){
    cin>>socks[i];
}
map<int,int> frequency;
for(int i = 0;i<n;i++){
    frequency[socks[i]]++;   /// in map score --> socks[i] will act as key and the socre[socks[i]] will act as value for particular key
}

map<int, int> :: iterator it  = frequency.begin();  /// creating map iterator for traversal in map
int pairs = 0;
while(it != frequency.end()){
    cout<<it->first <<" : "<<it->second<<endl;
    pairs += it->second/2;
    it++;
}

cout<<endl;
cout<<"NO. of pairs ---> "<<pairs;
return 0;
}