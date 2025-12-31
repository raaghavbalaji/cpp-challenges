#include<iostream>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);
int count = 0;
for(int i = 0; n[i] != 0; i++){
count ++;
}
cout<<"The length of the string: "<<count<<endl;
return 0;
}