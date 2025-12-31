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

bool visited[1000] = {false};

for(int i = 0; i < a.length(); i++){
for(int j = 0; j < b.length(); j++){
if(a[i] == b[j] && visited[a[i]] == false){
cout<<a[i]<<" ";
visited[a[i]] = true;
break;
}
}
}

return 0;
}