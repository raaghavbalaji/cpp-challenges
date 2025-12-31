#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of terms: "<<endl;
cin>>n;
int a = 0, b = 1;
cout<<a<<" "<<b<<" ";
for(int i = 3; i <= n; i++){
int next = a + b;
cout<<next<<" ";
a = b;
b = next;
}
return 0;
}