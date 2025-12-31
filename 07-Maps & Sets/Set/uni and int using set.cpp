#include<iostream>
#include<set>
using namespace std;
int main(){
int n;
cin>>n;
set<int>a;
for(int i = 0; i < n; i++){
int x;
cin>>x;
a.insert(x);
}
int m;
cin>>m;
set<int>b;
for(int i = 0; i < m; i++){
int y;
cin>>y;
b.insert(y);
}

set<int>uni = a;

for(int x : b){
uni.insert(x);
}
cout<<"union: ";
for(int y : uni){
cout<<y<<" ";
}
cout<<endl;
set<int> inter;
for (int x : a) {
if (b.find(x) != b.end()) {
inter.insert(x);
}
}
cout<<"Intersection: ";
for(int z : inter){
cout<<z<<" ";
}
cout<<endl;
return 0;
}