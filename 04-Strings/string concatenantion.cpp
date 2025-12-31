#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
string a;
cout<<"Enter string a: "<<endl;
getline(cin, a);


string b;
cout<<"Enter string b: "<<endl;
getline(cin, b);

string merged = a.append(b);

cout<<merged<<endl;
return 0;
}