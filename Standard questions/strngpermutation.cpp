#include<iostream>
using namespace std;
int main(){
    char a[100],b[100];
    int freq[26] = {0};
    int n = sizeof(freq)/sizeof(int);
    cin.getline(a,100);
    cin.getline(b,100);
    int i=0;
    for(int i=0;a[i]!='\0';i++){
        char ch  = a[i];
        int index = ch - 'a';
        freq[index] ++;
    }
    for(int i=0;b[i]!='\0';i++){
        char ch  = b[i];
        int index = ch - 'a';
        freq[index] --;
    }
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            cout<<"not a permutation ";
            return 0;
        }
    }
    cout<<"permutation ";
    return 0;
}