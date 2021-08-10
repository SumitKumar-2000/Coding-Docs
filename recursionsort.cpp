#include<iostream>
using namespace std;
bool issorted(int a[],int n){
    if(n==0 || n==1) //base case
        return true;

    bool chota_array = issorted(a+1, n-1);  //recursive case
    if(chota_array == true && a[0] <= a[1] ){
        return true;
    }
    else {return false;}
}
int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 bool ans = issorted(a,n);
 if(ans == true)
    cout<<"sorted";
 else 
    cout<<"unsorted";
 return 0;
}
// #include <iostream>
// using namespace std;

// bool isSorted(int *a, int n) {
// 	// base case
// 	if (n == 1 || n == 0) {
// 		return true;
// 	}

// 	// recursive case
// 	bool ChotaSortedHai = isSorted(a + 1, n - 1); // Pure assumption
// 	if (ChotaSortedHai == true and a[0] <= a[1]) {
// 		return true;
// 	}
// 	else {
// 		return false;
// 	}
// }

// int main() {
// 	int a[] = { 1, 4, 5, 6, 8 , 17};
// 	int n = sizeof(a) / sizeof(int);

// 	bool ans = isSorted(a, n);
// 	if (ans == true) {
// 		cout << "Yes" << endl;
// 	}
// 	else {
// 		cout << "No" << endl;
// 	}

// 	return 0;
// }