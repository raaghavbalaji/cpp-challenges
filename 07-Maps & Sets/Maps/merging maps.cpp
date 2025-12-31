#include<iostream>
#include<map>
using namespace std;
int main(){
int a, b;
cin>>a;
map<int, int>map1;
for(int i = 0; i < a; i++){
int n, m;
cin>>n>>m;
map1[n] = m;
}
cin>>b;
map<int, int>map2;
for(int i = 0; i < b; i++){
int n, m;
cin>>n>>m;
map2[n] = m;
}
map<int, int>merged;

for(auto x : map1){
merged[x.first] = x.second;
}
for(auto x : map2){
merged[x.first] += x.second;
}

for(auto x : merged){
cout<<x.first<<" --> "<<x.second<<endl;
}
return 0;
}


