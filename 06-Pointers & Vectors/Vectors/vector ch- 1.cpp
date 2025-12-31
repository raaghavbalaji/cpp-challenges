#include<iostream>
#include<set>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements to insert: "<<endl;
cin>>n;
set<int>mySet;
cout<<"Enter the elements to insert: "<<endl;
for(int i = 0; i < n; i ++){
int val;
cin>>val;
mySet.insert(val);
}
cout<<"Initial size: "<<mySet.size()<<endl;
int m;
cout<<"Enter the number of elements to be removed: "<<endl;
cin>>m;
cout<<"Enter the "<<m<<" elements to be removed: "<<endl;
for (int i = 0; i < m; i ++){
int val;
cin>>val;
mySet.erase(val);
}
cout<<"Size After removing: "<<mySet.size()<<endl;

cout<<"Remaining elemnts: ";
for(int b: mySet){
cout<<b<<" ";
}
cout<<endl;
return 0;
}
