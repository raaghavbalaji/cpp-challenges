#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the term of series:"<<endl;
cin>>n;
int a = 0, b= 1;
if(n == 1){
cout<<"0"<<endl;
}
else if(n == 2){
cout<<"1"<<endl;
}
else{
for(int i = 3; i <= n; i++){
int next  = a + b;
a = b;
b = next;
}
cout<<b<<endl;
}
return 0;
}