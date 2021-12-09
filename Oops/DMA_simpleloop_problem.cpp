 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    int *a = new int[n]; //dynamically creating array 

    for(int i=0;i<n;i++){
        a[i] = i+1;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    delete[] a; // freeing memory that is created dynamically
    a = NULL; // pointing the pointer to the NULL
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    int *x = new int ; // dynamically created integer 
    *x = 10;
    cout<<"x: "<<*x;

    return 0;
 }