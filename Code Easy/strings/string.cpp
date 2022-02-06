#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // initialization
    // string str;
    // cin>>str;                               // input
    // cout<<"output 1 : "<<str<<endl;         // output

    // string str1( 10,'b');
    // cout<<"output 2 : "<<str1<<endl;

    // string str2 = "sumit kumar";
    // cout<<str2<<endl; 

    // string str3;
    //inputing a sentence string using cin
    // cin>>str3;
    // cout<<str3<<endl;          // output of sumit kumar --> sumit
    // inputing a sentence string using getline(cin,str)
    // getline(cin,str3);
    // cout<<str3<<endl;

    // different functions in string
    
    // 1. appending and concatination
    string s1 = "good";
    string s2 = "Day";

    s1.append(s2);
    cout<<"method 1"<<s1<<endl;
    cout <<"method 2"<<s1 + s2<<endl;

    // 2. accessing character of string
    cout <<"5th character of s1 string :"<<s1[4]<<endl;

    // 3. clear function --> will clear all the elements of the string
    string str3 = "abc";
    cout<<"before clear : "<<str3<<endl;
    str3.clear();                         //<--- clear function
    cout<<"after clear : "<<str3<<endl;

    // 4. compare function --> compare 2 strings, if both are equal then gives 0 else gives a no.
    string s3 = "abc";
    string s4 = "abc";
    cout<<"after compare : "<<s3.compare(s4)<<endl;
    if(s3.compare(s4) == 0){
        cout<<"both are equal"<<endl;
    }else cout<<"both are different"<<endl;

    // 5. empty function --> checks whether string is empty of not
    if(str3.empty()) cout<<"string is empty"<<endl;
    else cout<<"string is not empty"<<endl;

    // 6. erase function --> will erase part of string from a certain index to other index
    string s5 = "nincompoop";
    // str_name.erase(index,no. of characters) --> 1st argument is index no., 2nd argument is no. of characters to be deleted from that index
    cout<<"before erase : "<<s5<<endl;
    s5.erase(3,4);
    cout<<"after erase : "<<s5<<endl;

    // 7. find function --> checks wheter particular substring is present or not, returns index of 1st character of sub string to be found
    string s6 = "nincompoop";
    cout<<"Index of substring : "<<s6.find("com")<<endl;

    // 8. insert function --> to insert character or a string to a particular index
    s6.insert(2, "lol");
    cout<<"string after insertion : "<<s6<<endl;

    // 9. size or length --> returns length of string
    cout<<"length of string : "<<s6.length()<<endl;

    // 10. substr --> getting substring
    cout<<"4 character string from 3rd index : "<<s6.substr(3,4)<<endl;
    
    // 11. stoi --> converts numeric string to integer
    string s7 = "1234567890";
    cout<<"converting to integer : "<<stoi(s7) + 2<<endl;

    // 12. to_string --> converts an integer to string
    int n = 234453452;
    cout<<"converting to string : "<<to_string(n) + "abc"<<endl;

    // 13. sort --> sorts the string in lexicographical order, make use of library -> algorithm
    sort(s6.begin(),s6.end());
    cout<<"s6 after sort : "<<s6<<endl;
    

    return 0;
}