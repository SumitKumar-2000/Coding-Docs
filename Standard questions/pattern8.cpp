#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
if(n % 2 != 0){
	for(int row=1;row<=n-n/2;row++){
        int expt =     2*(n+1-(2*row))
		for(int spaces = 1;spaces<=2*(n+1-(2*row));spaces++){
			cout<< " ";
		}
		
		int no=row;
		for(int i=1;i<=row;i++){
			cout<<no<<" ";
			no--;
		}
	
		for(int in_spaces = 1;in_spaces <= row-1;in_spaces++){
			cout<<" ";
		}
		
		
		
	cout<<endl;
	}
	for(int row=n-n/2-1;row>=1;row--){

		for(int spaces = 1;spaces<=2*(n+1-(2*row));spaces++){
			cout<< " ";
		}
		
		int no=row;
		for(int i=1;i<=row;i++){
			cout<<no<<" ";
			no--;
		}
		
	cout<<endl;
	}

}
}