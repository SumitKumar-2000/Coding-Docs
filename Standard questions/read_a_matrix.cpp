#include<iostream>
using namespace std;

int main(){
    int a[100][100];
    int r,c;
    cin>>r>>c;
    int val = 1;
    for(int row = 0;row<r;row++){
        for(int col = 0;col < c; col++){
            a[row][col] = val;
            val++;
        }
    }
    for(int row = 0;row<r;row++){
        for(int col = 0;col < c; col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }

    int key;
    cin>>key;

    bool iskeypresent = false;
    for(int row = 0;row<r;row++){
        for(int col = 0;col < c; col++){
            if(a[row][col] = key){
                cout<<"key found at"<<row<<", "<<col<<endl;
                iskeypresent = true;
                break;
            }
            if(iskeypresent == true){
                break;
            }
        }
    }
    if( iskeypresent == false){
        cout<<"key not found";
    }

    return 0;
}