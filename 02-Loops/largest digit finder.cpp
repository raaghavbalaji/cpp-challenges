#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number: "<<endl;
cin>>n;
int large = 0;
while(n > 0){
int digit = n % 10;
if(digit > large){
large = digit;
}
n = n / 10;
}
cout<<"Largest digit: "<<large<<endl;
return 0;
}