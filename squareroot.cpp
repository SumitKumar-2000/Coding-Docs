#include<iostream>
using namespace std;
int main(){
    int n;
    float i=1,inc = 1;
    int current_precision = 0;
    int total_precision = 3;
    cin>>n;

    while (current_precision <= total_precision)
    {
        while(i*i <= n)
        {
            i = i + inc;
        }
        i = i-inc;
        inc = inc / 10;

        current_precision += 1;
    }
    
    cout<<i<<endl;
    return 0;
    
}