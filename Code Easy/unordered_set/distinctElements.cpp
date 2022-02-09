#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec = {1,0,5,6,2,4,5,7,8,0,5};
    unordered_set<int> st;
    for(auto elem : vec){
        st.insert(elem);
    }
    cout<<"distinct elements are : "<<st.size();
    return 0;
}