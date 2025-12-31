#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number: "<<endl;
cin>>n;
int original = n;
int rev = 0;
while(n > 0){
int digit = n % 10;
rev = rev * 10 + digit;
n = n / 10;
}
if(rev == original){
cout<<"The given number is palindrome"<<endl;
}

else{
cout<<"The given number is not palindrome"<<endl;
}
return 0;
}