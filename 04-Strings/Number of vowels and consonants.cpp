#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

int vowels = 0;
int consonants = 0;
for(int i = 0; i < n.length(); i++){
char ch = tolower(n[i]);
if(ch >= 'a' && ch <= 'z'){
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
vowels ++;
}
else{
consonants ++;
}
}
}
cout<<"Number of vowels: "<<vowels<<endl;
cout<<"Number of consonants: "<<consonants<<endl;

return 0;
}