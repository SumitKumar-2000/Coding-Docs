#include<bits/stdc++.h>
using namespace std;
int stringtoint(char *a,int n){
    if(n==0)
        return 0;
    char ch = a[n-1];
    int digit = ch-'0';

    return stringtoint(a,n-1) * 10 + digit;
}
int main(){
    char a[100];
	for(int i=0;a[i] != '\0';i++){
		cin>>a[i];
	}
    int n = strlen(a);
    int ans = stringtoint(a,n);
    cout<<ans;
return 0;
}