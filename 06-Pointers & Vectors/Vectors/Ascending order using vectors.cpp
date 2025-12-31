#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> wel;
int n; 
cout<<"Enter the size: "<<endl;
cin>>n;
cout<<"Enter elements: "<<endl;
for(int i = 0; i < n; i ++){
int val;
cin>>val;
wel.insert(val);
}
for(int x: wel){
cout<<x<<" ";
}
cout<<endl;
return 0;
}
    