#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	for(int row=1;row<=n;row++){
		for(int space = 1;space<=n-row;space++){
			cout<<' ';
		}
		for(int i=1;i<n;i++){
			if(row == 1 || row == n || i==1 || i==row){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}