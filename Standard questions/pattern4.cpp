#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int row=n;row>=1;row--){
		int no=1;
		for(int i=1;i<=row;i++){
			cout<<no;
			no++;
        }
		cout<<endl;
	}
    return 0;
}