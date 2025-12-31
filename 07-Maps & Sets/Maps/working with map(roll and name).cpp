#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cin>>n;
map<int, string>rollname;
for(int i = 0; i < n; i++){
int roll;
string name;
cin>>roll;
cin.ignore();
getline(cin, name);
rollname[roll] = name;
}
for(auto x : rollname){
cout<<x.first<<" --> "<<x.second<<endl;
}
return 0;
}
