#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: " <<endl;
cin>>n;
if(n % 5 == 0 && n % 11 == 0){
cout<<"It is divisible by both 5 and 11"<<endl;
}
else{
cout<<"It is not divisible by both 5 ans 11"<<endl;
}
return 0;
}