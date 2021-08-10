#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3};
    int n= sizeof(a)/sizeof(int);
    int k = 3, ans = 0;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum += a[i];
            if(sum == k){
                cout<<"subarray : [" << i << "," << j << "]" <<endl;
                ans++;
            }
        }
    }
    cout<<"total subarray of sum "<< k << " : "<< ans << endl;
    return 0;
}