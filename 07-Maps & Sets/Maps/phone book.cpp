#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cin>>n;
map<string, int>phone;
for(int i = 0; i < n; i ++){
string name;
int num;
cin>>name>>num;
phone[name] = num;
}
string targetname;
cin>>targetname;
if(phone.count(targetname) == 1){
cout<<targetname<<" --> "<<phone[targetname]<<endl;
}
else{
cout<<"user not found :("<<endl;
}
return 0;
}
    