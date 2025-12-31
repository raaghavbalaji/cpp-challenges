#include<iostream>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

string longest = "";
string current = "";

for(int i = 0; i <= n.length(); i++){
if(i < n.length() && n[i] != ' '){
current += n[i];
}
else{
if(current.length() > longest.length()){
longest = current;
}
current = "";
}
}
cout<<"Longest word: "<<longest<<endl;
cout<<"Length of the word:  "<<longest.length()<<endl;


return 0;
}