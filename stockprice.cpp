#include<iosteam>
using namespace std;
int main(){
    int a[] = {2,4,1,3,6,8};
    int n = sizeof(a)/sizeof(int);
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i] <   min ){
            min = a[i];
        }
    }
}