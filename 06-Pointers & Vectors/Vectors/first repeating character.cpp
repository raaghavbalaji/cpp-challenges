#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
string n;
cout<<"Enter string a: "<<endl;
getline(cin, n);

vector<int>freq(256, 0);

for(int i = 0; i < n.length(); i++){
freq[n[i]]++;
}

char result = '\0';
for(int i = 0; i < n.length(); i++){
if(freq[n[i]] > 1){
result = n[i];
break;
}
}

if(result != '\0'){
cout<<"The first repeating character: "<<result<<endl;
}
else{
cout<<"No non repeating character found"<<endl;
}

return 0;
}