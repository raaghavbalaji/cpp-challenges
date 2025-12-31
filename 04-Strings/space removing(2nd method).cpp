#include<iostream>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

int j = 0;

for(int i = 0; i < n.length(); i++){
if(n[i] != ' '){
n[j++] = n[i];
}
}
n.resize(j);

cout<<"String with no spaces: "<<n<<endl;
return 0;
}