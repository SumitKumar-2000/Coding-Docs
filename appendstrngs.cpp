#include<iostream>
using namespace std;
int length(char *a){
    int i;
    for(int i=0;a[i] !='\0';i++){

    }
    return i;
}
void append(char *a, char *b){
int i=length(a);
int len=length(b);
int j=0;

    while(j <= len){
        a[i++] = b[j++];
    }
}
int main(){
char a[100] = "sumit";
char b[100] = "kumar";

// cin.getline(a,100);
// cin.getline(b,100);
cout<<a<<endl;
append(a, b);
cout<<a;
return 0;
}
// #include <iostream>
// using namespace std;

// int length(char *a) {
// 	int i;
// 	// int length = 0;
// 	for (i = 0 ; a[i] != '\0' ; i++) {
// 		// length++;
// 	}

// 	return i;
// }

// void append(char *a, char *b) {
// 	int i = length(a);
// 	int lenb = length(b);

// 	int j = 0;
// 	while (j <= lenb) {
// 		a[i++] = b[j++];
// 	}
// }

// int main() {
// 	char a[100] = "sumit";
// 	char b[100] = "kumar";

// 	cout << a << endl;
// 	append(a, b);
// 	cout << a << endl;


// 	return 0;
// }