#include<iostream>
#include<string>
using namespace std;
string keys[10] = {
    "","","ABC","DEF","GHI","JKL","MNO","PQRs","TUV","WXYZ"
};
void phonekeypad(char *in,int i,char *out,int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    //recursive case
    int index = in[i] - '0';
    for(int k=0 ; keys[index][k] != '\0' ; k++){
        phonekeypad(in,i+1,out,j+1);
    }
}
int main(){
    char in[100],out[100];
    cin>>in;

    phonekeypad(in,0,out,0); 
return 0;
}