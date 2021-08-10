#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[] ={1,-2,4,1,-3,5,-10};
    int n = sizeof(a)/sizeof(int);
    int max_sum = INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum < 0){
            sum = 0;
        }
        max_sum = max(max_sum,sum);
    }
    cout<<"max sum: "<<max_sum;
    return 0;
}