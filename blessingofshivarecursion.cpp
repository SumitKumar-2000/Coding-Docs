#include<bits/stdc++.h>
using namespace std;

int minoperations(string s){
    int n = s.size();
    int count1 = 0; // abababababab... 
    int count2 = 0; // babababababa...

    for(int i=0;i<n;i++){
        //ababab
        if(s[i]-'a' == i%2) // 97 - 97
        {
            count2++;
        }
        else {
            count1++;
        }
    }
    return min(count1,count2);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<minoperations(s)<<endl;
    }
return 0;
}