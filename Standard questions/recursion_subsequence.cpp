#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string s1,int i){
    //base case 
        if(i == s.length()){
            cout<<s1<<endl;
            return;
        }

    //recursive case
        subseq(s,s1,i+1);
        s1 += s[i];
        subseq(s,s1,i+1);
}
int main(){
    string s,s1 = "";
    cin>>s;

    subseq(s,s1,0);

return 0;
}