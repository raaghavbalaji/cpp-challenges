#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number: "<<endl;
cin>>n;
for(int i = n; i >= 1; i--){
if(i % 3 == 0 || i % 2 == 0){
continue;
}
cout<<i<<" ";
}
cout<<endl;
return 0;
}