#include<iostream>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

string result = "";

for(int i = 0; i < n.length(); i++){
if(n[i] != ' '){
result += n[i];
}
}
cout<<"String with no spaces: "<<result<<endl;

return 0;
}