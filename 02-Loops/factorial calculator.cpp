#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
if(n < 1){
cout<<"Factorials are only defined for positive numbers, sorry"<<endl;
}
unsigned long long s = 1;
for(int i= 1; i<= n; i++){
s *= i;
}
cout<<"factorial of "<<n<<" is "<<s<<endl;
return 0;
}