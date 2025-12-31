#include<iostream>
#include<set>
using namespace std;
int main(){
int n;
cin>>n;
set<int>unique;
for(int i = 0; i < n; i++){
int a;
cin>>a;
unique.insert(a);
}
cout<<"Unique numbers: ";
for(int x : unique){
cout<<x<<" ";
}
return 0;
}