#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;
int main(){
string n;
cout<<"Enter a string: "<<endl;
getline(cin, n);

int count = 0;

vector <bool> visited(n.length(), false);


for(int i = 0; i < n.length(); i++){
if(visited[i] || n[i] == ' '){
continue;
}
count = 1;

for(int j = i + 1; j < n.length(); j++){
if(n[i] == n[j]){
count ++;
visited[j] = true;
}
}
cout<<n[i]<<" --> "<<count<<" times"<<endl;
}

return 0;
}