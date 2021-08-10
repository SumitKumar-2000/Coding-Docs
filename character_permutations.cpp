#include<iostream>
using namespace std;
int main(){
    char a[] = "abacbz";
    char b[] = "baacb";
    int freq[26] = {0}; // all 26 elements are 0

    for(int i=0;a[i] != '\0';i++){
        char ch = a[i];

        int index = ch - 'a';
        freq[index] ++;
    }

    for(int i=0;i<26;i++){
        cout<<freq[i];
    }
    cout<<endl<<endl;

    for(int i=0;b[i] != '\0';i++){
        char ch = b[i];

        int index = ch - 'a';
        freq[index] --;
    }

    for(int i=0;i<26;i++){
        cout<<freq[i];
    }
    cout<<endl;

    bool ispermutations = true;
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            ispermutations = false;
            break;
        }
    }
    if(ispermutations == true){
        cout<<"it's a permutation"<<endl;
    }
    else{
        cout<<"not a permutation :"<<endl;
    }
    
    return 0;
}