#include<iostream>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

int count = 0;
bool word = false;

for(int i = 0; i < n.length(); i++){
if(n[i] != ' '){
if(!word){
count ++;
word = true;
}
}
else{
word = false;
}
}
cout<<"Number of words: "<<count<<endl;
return 0;
}