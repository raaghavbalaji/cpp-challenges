#include<iostream>
#include<set>
using namespace std;
int main(){
int n;
cin>>n;
cin.ignore();
set<string>memb;
for(int i = 0; i < n; i++){
string a;
getline(cin, a);
memb.insert(a);
}
int b;
cin>>b;
cin.ignore();
for(int i = 0; i < b; i++){
string t;
getline(cin, t);
if(memb.count(t) == 1){
cout<<t<<" is an active member :)"<<endl;
}
else{
cout<<"no member found with the name "<<t<<" :("<<endl;
}
}
return 0;
}