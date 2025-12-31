#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number: "<<endl;
cin>>n;
int small = 9;
while(n > 0){
int digit = n % 10;
if(digit < small){
small = digit;
}
n = n / 10;
}
cout<<"Snallest digit: "<<small<<endl;
return 0;
}