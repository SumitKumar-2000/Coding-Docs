
#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void permutation(string s,string s1,int i){
	//base case 
	if(s[i] == '\0'){
			// cout<<s<<endl;
		v.push_back(s);
		return;
	}
	// recursive case
	for(int j=i;s[j] != '\0';j++){
		swap(s[i],s[j]);
		permutation(s,s1,i+1);
		swap(s[i],s[j]);
	}
}
int main(){
	string s,s1;
	cin>>s;
	s1 = s;
	permutation(s,s1,0);
	sort(v.begin(),v.end());
	for(auto x:v)cout<<x<<endl;
	return 0;
}