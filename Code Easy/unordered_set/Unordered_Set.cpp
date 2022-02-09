#include<bits/stdc++.h>
using namespace std;
int main(){
    
    unordered_set<int> st;
    st.insert(1);
    st.insert(0);
    st.insert(5);
    st.insert(8);
    st.insert(9);
    st.insert(4);
    st.insert(4);

    // 1. iterating over set
    for(auto it = st.begin(); it != st.end(); it++){
        cout<<*it<<endl;
    }

    // 2. size function
    cout<<"size is : "<<st.size()<<endl;

    // 3. find function 
    
    if(st.find(4) == st.end()){
        cout<<"not found";
    }else cout << "found"<<endl;

    // 4. count function 
    // cout<<st.count(4);  returns 1 if element is present else returns 0
    if(st.count(90) == 0) cout<<"not found"<<endl;
    else cout<<"found"<<endl;

    // 5. erase and clear function
    // st.erase(0);
    st.erase(st.begin(),st.end());
    st.clear();
    
    return 0;
}