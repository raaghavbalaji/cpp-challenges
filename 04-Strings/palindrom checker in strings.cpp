#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

string original = n;

int start = 0;
int end = n.length() - 1;
while(start < end){
char temp = n[start];
n[start] = n[end];
n[end] = temp;
start ++;
end --;
}
if(n == original){
cout<<"It is palindrome"<<endl;
}
else{
cout<<"It is not palindrome"<<endl;
}
return 0;
}