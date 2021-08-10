#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int=0;i<n;i++){
    cin>>a[i];
}
pair<int,int> arrpos[n]; //creating pair for array
for(int i=0;i<n;i++){
    arrpos[i].first = arr[i];
    arrpos[i].second = i;
}
sort(arrpos,arrpos + n); //bidefault sort on the basis of .first one

return 0;
}